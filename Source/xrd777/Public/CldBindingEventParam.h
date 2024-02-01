#pragma once
#include "CoreMinimal.h"
#include "CldBindingEventActorTag.h"
#include "CldBindingEventParam.generated.h"

USTRUCT(BlueprintType)
struct FCldBindingEventParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mEventMajorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mEventMinorID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCldBindingEventActorTag> mActorTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 mMsgRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> mPictureDefs;
    
    XRD777_API FCldBindingEventParam();
};

