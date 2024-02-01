#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AtlEvtLightScenarioSublevelParam.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FAtlEvtLightScenarioSublevelParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId PrimaryAssetId;
    
    XRD777_API FAtlEvtLightScenarioSublevelParam();
};

