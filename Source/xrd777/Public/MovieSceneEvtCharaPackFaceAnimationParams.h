#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvtCharaPackFaceAnimationParams.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtCharaPackFaceAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* AnimationAsset;
    
    FMovieSceneEvtCharaPackFaceAnimationParams();
};

