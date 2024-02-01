#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtDialoguePayload.h"
#include "MovieSceneEvtDialogueSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtDialogueSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtDialoguePayload> KeyValues;
    
public:
    FMovieSceneEvtDialogueSectionData();
};

