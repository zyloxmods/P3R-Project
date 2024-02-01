#pragma once
#include "CoreMinimal.h"
#include "CommunityRankUpEventData.generated.h"

USTRUCT(BlueprintType)
struct FCommunityRankUpEventData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Point;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Brain;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 charm;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Courage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flag0;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flag1;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flag2;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Flag3;
    
    XRD777_API FCommunityRankUpEventData();
};

