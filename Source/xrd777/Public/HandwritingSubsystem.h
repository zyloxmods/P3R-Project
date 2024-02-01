#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AtlHandwritingNiagaraRequestParam.h"
#include "EAtlEvtHandwritingType.h"
#include "EAtlHandwritingGroupType.h"
#include "EHandwritingLayout.h"
#include "EHandwritingSpawnRules.h"
#include "Templates/SubclassOf.h"
#include "HandwritingSubsystem.generated.h"

class ACharacter;
class AHandwritingEffectBase;
class AHandwritingSpawner;
class ANpcBaseCore;
class UAtlHandwritingDataAsset;
class UObject;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API UHandwritingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlHandwritingDataAsset* HandwritingDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAtlEvtHandwritingType, TSoftClassPtr<AHandwritingEffectBase>> PreloadedHandwritingEffectObjMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAtlEvtHandwritingType, TSoftClassPtr<AHandwritingEffectBase>> PreloadedHandwritingEffectObjMap_Field;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EAtlEvtHandwritingType, TSoftClassPtr<AHandwritingEffectBase>> PreloadedHandwritingEffectObjMap_Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AHandwritingSpawner> HandwritingSpawnerDefaultClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AHandwritingSpawner>> HandwritingSpawnerClassArray;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
public:
    UHandwritingSubsystem();
    UFUNCTION(BlueprintCallable)
    AHandwritingSpawner* SpawnHandwritingAttachedNpc(EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, ANpcBaseCore* NpcBase, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop);
    
    UFUNCTION(BlueprintCallable)
    AHandwritingSpawner* SpawnHandwritingAttached(EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, ACharacter* Character, FName AttachSocketName, EHandwritingSpawnRules InSpawnRule, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    AHandwritingSpawner* SpawnHandwritingAtLocation(const UObject* WorldContextObject, EAtlHandwritingGroupType GroupType, EAtlEvtHandwritingType Type, const FAtlHandwritingNiagaraRequestParam& InParam, bool bAutoDestroySpawner, bool InbLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPolandLanguage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedWoofLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutPosition3, FVector& OutPosition4);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedWhineLayoutData(FVector& OutPosition, FVector& OutScale, float& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedQuestionLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutPosition3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedLayoutScale(EHandwritingLayout InIndex, float& OutScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedLayoutRotation(EHandwritingLayout InIndex, float& OutAngle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedLayoutPosition(EHandwritingLayout InIndex, FVector& OutPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedLayoutData(EHandwritingLayout InIndex, FVector& OutPosition, float& OutAngle, float& OutScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedExclamationQuestionLayoutData(FVector& OutPosition1, FVector& OutPosition2, FVector& OutScale, float& OutScaleFloat);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedDoubleExclamationLayoutData(FVector& OutPosition1, FVector& OutPosition2);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedCallingLayoutData(float& OutScale1, float& OutScale2, float& OutScale3);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedAllLayoutData(EHandwritingLayout InIndexPosRot, FVector& OutPosition, float& OutAngle, EHandwritingLayout InIndexScale, FVector& OutScale, float& OutSize);
    
};

