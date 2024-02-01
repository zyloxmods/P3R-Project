#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneEvtCharaAnimationSectionData.h"
#include "MovieSceneEvtConditionalBranchData.h"
#include "MovieSceneEvtCharaAnimationSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaAnimationSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaAnimationSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtConditionalBranchData CondBranchData;
    
    XRD777_API FMovieSceneEvtCharaAnimationSectionTemplate();
};

