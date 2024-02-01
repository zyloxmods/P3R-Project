#pragma once
#include "CoreMinimal.h"
#include "Curves/NameCurve.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtDialogueSectionData.h"
#include "MovieSceneEvtDialogueSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtDialogueSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtDialogueSectionData EventData;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameCurve Events;
    
public:
    UMovieSceneEvtDialogueSection();
};

