#pragma once
#include "CoreMinimal.h"
#include "Curves/NameCurve.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtDialogueOptionsSectionData.h"
#include "MovieSceneEvtDialogueOptionsSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtDialogueOptionsSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameCurve Events;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtDialogueOptionsSectionData EventData;
    
public:
    UMovieSceneEvtDialogueOptionsSection();
};

