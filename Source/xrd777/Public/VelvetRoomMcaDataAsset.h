#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "VelvetRoomMcaDataAsset.generated.h"

class UMcaAsset;

UCLASS(Blueprintable)
class XRD777_API UVelvetRoomMcaDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMcaAsset*> Asset;
    
    UVelvetRoomMcaDataAsset();
};

