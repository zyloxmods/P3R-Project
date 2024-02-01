#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtFieldAnimationSectionData.h"
#include "MovieSceneEvtFieldAnimationSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtFieldAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtFieldAnimationSectionData EventData;
    
    UMovieSceneEvtFieldAnimationSection();
};

