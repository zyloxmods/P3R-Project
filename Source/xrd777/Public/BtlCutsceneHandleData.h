#pragma once
#include "CoreMinimal.h"
#include "BtlCutsceneHandleData.generated.h"

class UAssetLoader;
class ULevelSequence;

USTRUCT(BlueprintType)
struct FBtlCutsceneHandleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequence* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RowName;
    
    XRD777_API FBtlCutsceneHandleData();
};

