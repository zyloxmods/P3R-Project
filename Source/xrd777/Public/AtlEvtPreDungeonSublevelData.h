#pragma once
#include "CoreMinimal.h"
#include "AtlEvtPreDungeonSublevelData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FAtlEvtPreDungeonSublevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventBGFloorLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BGEnvironmentSubLevel;
    
    FAtlEvtPreDungeonSublevelData();
};

