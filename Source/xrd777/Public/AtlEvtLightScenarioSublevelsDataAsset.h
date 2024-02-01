#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "AtlEvtAdditionBGSublevel.h"
#include "AtlEvtLightScenarioSublevel.h"
#include "AtlEvtLightScenarioSublevelsDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAtlEvtLightScenarioSublevelsDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtLightScenarioSublevel> LightingIndexArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtAdditionBGSublevel> AdditionBGSublevelArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAutoLoadFirstLightingScenarioLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceDisableUseCurrentTimeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceMonth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForceDay;
    
    UAtlEvtLightScenarioSublevelsDataAsset();
};

