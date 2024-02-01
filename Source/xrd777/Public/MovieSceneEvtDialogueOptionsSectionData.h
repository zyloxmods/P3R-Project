#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtDialogueOptionsPayload.h"
#include "MovieSceneEvtDialogueOptionsSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtDialogueOptionsSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtDialogueOptionsPayload> KeyValues;
    
public:
    XRD777_API FMovieSceneEvtDialogueOptionsSectionData();
};

