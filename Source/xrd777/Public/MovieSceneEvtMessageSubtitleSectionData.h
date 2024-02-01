#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtMessageSubtitlePayload.h"
#include "MovieSceneEvtMessageSubtitleSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtMessageSubtitleSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtMessageSubtitlePayload> KeyValues;
    
public:
    FMovieSceneEvtMessageSubtitleSectionData();
};

