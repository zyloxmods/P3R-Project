#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneEvtConditionalBranchData.h"
#include "MovieSceneEvtSeqTimeJumpControllerSectionData.h"
#include "MovieSceneEvtSeqTimeJumpControllerSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtSeqTimeJumpControllerSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtSeqTimeJumpControllerSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtConditionalBranchData CondBranchData;
    
    XRD777_API FMovieSceneEvtSeqTimeJumpControllerSectionTemplate();
};

