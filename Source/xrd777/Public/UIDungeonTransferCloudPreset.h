#pragma once
#include "CoreMinimal.h"
#include "EUIDungeonTransferCloudDrawMode.h"
#include "UIDungeonTransferCloudPreset.generated.h"

USTRUCT(BlueprintType)
struct FUIDungeonTransferCloudPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SprNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIDungeonTransferCloudDrawMode DrawMode;
    
    XRD777_API FUIDungeonTransferCloudPreset();
};

