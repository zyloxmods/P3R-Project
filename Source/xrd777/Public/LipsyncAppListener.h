#pragma once
#include "CoreMinimal.h"
#include "EAppCharCategoryType.h"
#include "LipsyncAppListener.generated.h"

USTRUCT(BlueprintType)
struct FLipsyncAppListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharCategoryType CharcterCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaIndexID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SoundMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayingCheckWaitTime;
    
    XRD777_API FLipsyncAppListener();
};

