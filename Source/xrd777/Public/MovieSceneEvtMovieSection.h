#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtMovieSectionData.h"
#include "MovieSceneEvtMovieSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtMovieSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtMovieSectionData EventData;
    
    UMovieSceneEvtMovieSection();
};

