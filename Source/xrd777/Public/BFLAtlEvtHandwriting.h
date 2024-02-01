#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "NiagaraCommon.h"
#include "EAppCharCategoryType.h"
#include "EAtlEvtHandwritingType.h"
#include "BFLAtlEvtHandwriting.generated.h"

class ACharacter;
class UNiagaraComponent;
class UObject;

UCLASS(Blueprintable)
class XRD777_API UBFLAtlEvtHandwriting : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLAtlEvtHandwriting();
    UFUNCTION(BlueprintCallable)
    static UNiagaraComponent* SpawnHandwritingAttached(EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, ACharacter* AttachToCharacter, FName AttachPointName, FVector Location, FRotator Rotation, FVector Scale, TEnumAsByte<EAttachLocation::Type> LocationType, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UNiagaraComponent* SpawnHandwritingAtLocation(const UObject* WorldContextObject, EAtlEvtHandwritingType Type, int32 LoopCount, float CameraOffset, FVector Location, FRotator Rotation, FVector Scale, bool bAutoDestroy, bool bAutoActivate, ENCPoolMethod PoolingMethod, bool bPreCullCheck);
    
    UFUNCTION(BlueprintCallable)
    static FName MakeHandwritingTypeName(EAtlEvtHandwritingType Type);
    
    UFUNCTION(BlueprintCallable)
    static FName MakeHandwritingTypeDefaultParamAssetPath(EAtlEvtHandwritingType Type);
    
    UFUNCTION(BlueprintCallable)
    static FName MakeHandwritingTypeCharaParamAssetPath(EAtlEvtHandwritingType Type, EAppCharCategoryType CharacterTypeCategoryType, int32 CharaIndexID);
    
    UFUNCTION(BlueprintCallable)
    static FName MakeHandwritingTypeAssetPath(EAtlEvtHandwritingType Type);
    
};

