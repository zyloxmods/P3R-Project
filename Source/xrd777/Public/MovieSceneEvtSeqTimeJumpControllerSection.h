#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtSeqTimeJumpControllerSectionData.h"
#include "MovieSceneEvtSeqTimeJumpControllerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtSeqTimeJumpControllerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtSeqTimeJumpControllerSectionData EventData;
    
public:
    UMovieSceneEvtSeqTimeJumpControllerSection();
};

