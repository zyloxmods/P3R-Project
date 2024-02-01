#pragma once
#include "CoreMinimal.h"
#include "VelvetRoomQuestReward.generated.h"

USTRUCT(BlueprintType)
struct FVelvetRoomQuestReward {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 itemNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 money;
    
    XRD777_API FVelvetRoomQuestReward();
};

