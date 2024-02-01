#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "VelvetRoomQuestItem.h"
#include "VelvetRoomQuestDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UVelvetRoomQuestDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVelvetRoomQuestItem> Data;
    
    UVelvetRoomQuestDataAsset();
};

