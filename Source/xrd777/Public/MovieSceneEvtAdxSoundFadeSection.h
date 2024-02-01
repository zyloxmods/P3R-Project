#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtAdxSoundFadeSectionData.h"
#include "MovieSceneEvtAdxSoundFadeSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtAdxSoundFadeSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtAdxSoundFadeSectionData EventData;
    
    UMovieSceneEvtAdxSoundFadeSection();
};

