#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneEvtCharaPackFaceAnimationSectionData.h"
#include "MovieSceneEvtConditionalBranchData.h"
#include "MovieSceneEvtCharaPackFaceAnimationSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaPackFaceAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaPackFaceAnimationSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtConditionalBranchData CondBranchData;
    
    XRD777_API FMovieSceneEvtCharaPackFaceAnimationSectionTemplate();
};

