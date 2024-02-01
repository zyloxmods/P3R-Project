#pragma once
#include "CoreMinimal.h"
#include "BustupParts.h"
#include "BustupPoseOffset.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupPoseOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FBustupParts> PoseOffsets;
    
    FBustupPoseOffset();
};

