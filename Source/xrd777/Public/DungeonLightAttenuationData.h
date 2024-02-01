#pragma once
#include "CoreMinimal.h"
#include "DungeonLightAttenuationData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonLightAttenuationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndDist;
    
    XRD777_API FDungeonLightAttenuationData();
};

