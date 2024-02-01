#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/Scene.h"
#include "NiagaraCommon.h"
#include "NiagaraExtendsFunctionLibrary.generated.h"

class AActor;
class APlayerController;
class UNiagaraComponent;
class UNiagaraSystem;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable)
class NIAGARAEXTENDS_API UNiagaraExtendsFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UNiagaraExtendsFunctionLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNiagaraComponent* SpawnSystemAttachedOnCamera(const FString& WorldAssetPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNiagaraComponent* SpawnSystemAttached(UNiagaraSystem* SystemTemplate, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, FRotator Rotation, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAbsoluteLocation, bool bAbsoluteRotation, bool bAbsoluteScale, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorFromBP(APlayerController* InPC, const FString& InBaseAssetPath, const FTransform InBaseTransform);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="InWorldContextObject"))
    static void SetAllNiagaraPaused(const UObject* InWorldContextObject, bool InPaused);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAssetEditorWindowFromPath(const FString& FilePath);
    
    UFUNCTION(BlueprintCallable)
    static void OpenAssetEditorWindowFromAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetWarldLevelNames(const FString& WorldAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetNiagaraEmitterVectorValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    static FQuat GetNiagaraEmitterQuatValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    static FMatrix GetNiagaraEmitterMatrixValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNiagaraEmitterIntValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    static float GetNiagaraEmitterFloatValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetNiagaraEmitterBoolValue(const UNiagaraComponent* NiagaraComponent, const FString& InEmitterName, const FString& InValueName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FPostProcessSettings GetFinalPostProcessSettings(UWorld* World);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetEmitterNames(UNiagaraComponent* NiagaraComponent);
    
};

