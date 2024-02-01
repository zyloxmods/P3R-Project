#pragma once
#include "CoreMinimal.h"
#include "Evaluation/MovieSceneEvalTemplate.h"
#include "MovieSceneEvtCharaOperationControllerSectionData.h"
#include "MovieSceneEvtConditionalBranchData.h"
#include "MovieSceneEvtCharaOperationControllerSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaOperationControllerSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaOperationControllerSectionData EventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtConditionalBranchData CondBranchData;
    
    XRD777_API FMovieSceneEvtCharaOperationControllerSectionTemplate();
};

