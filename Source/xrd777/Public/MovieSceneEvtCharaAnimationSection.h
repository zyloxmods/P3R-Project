#pragma once
#include "CoreMinimal.h"
#include "Curves/NameCurve.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtCharaAnimationSectionData.h"
#include "MovieSceneEvtCharaAnimationSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtCharaAnimationSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameCurve Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaAnimationSectionData EventData;
    
public:
    UMovieSceneEvtCharaAnimationSection();
};

