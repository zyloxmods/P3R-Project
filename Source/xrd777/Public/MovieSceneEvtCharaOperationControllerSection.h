#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSection.h"
#include "MovieSceneEvtCharaOperationControllerSectionData.h"
#include "MovieSceneEvtCharaOperationControllerSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneEvtCharaOperationControllerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtCharaOperationControllerSectionData EventData;
    
public:
    UMovieSceneEvtCharaOperationControllerSection();
};

