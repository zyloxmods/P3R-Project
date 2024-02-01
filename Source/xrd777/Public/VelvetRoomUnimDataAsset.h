#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "VelvetRoomUnimDataAsset.generated.h"

class UUimAsset;

UCLASS(Blueprintable)
class XRD777_API UVelvetRoomUnimDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UUimAsset*> Asset;
    
    UVelvetRoomUnimDataAsset();
};

