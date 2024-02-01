#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtMessageSubtitleSectionData.h"
#include "MovieSceneEvtMessageSubtitleSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtMessageSubtitleSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtMessageSubtitleSectionData EventData;
    
    UMovieSceneEvtMessageSubtitleSection();
};

