#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtAdxSoundSectionData.h"
#include "MovieSceneEvtAdxSoundSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtAdxSoundSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtAdxSoundSectionData EventData;
    
    UMovieSceneEvtAdxSoundSection();
};

