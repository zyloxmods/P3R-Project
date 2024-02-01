#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ShadowSettingData.generated.h"

USTRUCT(BlueprintType)
struct FShadowSettingData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float shadowBiasHigh;
    
    XRD777_API FShadowSettingData();
};

