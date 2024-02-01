#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtCharaHandwritingSectionData.h"
#include "MovieSceneEvtCharaHandwritingSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtCharaHandwritingSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaHandwritingSectionData EventData;
    
    UMovieSceneEvtCharaHandwritingSection();
};

