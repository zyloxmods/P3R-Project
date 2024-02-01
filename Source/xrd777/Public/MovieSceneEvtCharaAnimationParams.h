#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvtCharaAnimationParams.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtCharaAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimationAsset;
    
    FMovieSceneEvtCharaAnimationParams();
};

