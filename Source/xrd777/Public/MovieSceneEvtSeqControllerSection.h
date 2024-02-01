#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtSeqControllerSectionData.h"
#include "MovieSceneEvtSeqControllerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtSeqControllerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtSeqControllerSectionData EventData;
    
public:
    UMovieSceneEvtSeqControllerSection();
};

