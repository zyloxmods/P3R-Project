#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtAdxSoundManageSectionData.h"
#include "MovieSceneEvtAdxSoundManageSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtAdxSoundManageSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtAdxSoundManageSectionData EventData;
    
    UMovieSceneEvtAdxSoundManageSection();
};

