#pragma once
#include "CoreMinimal.h"
#include "AtlEvtLightScenarioSublevel.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FAtlEvtLightScenarioSublevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FieldLevelName;
    
    FAtlEvtLightScenarioSublevel();
};

