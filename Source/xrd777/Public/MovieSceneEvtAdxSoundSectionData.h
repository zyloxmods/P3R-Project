#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtAdxSoundPayload.h"
#include "MovieSceneEvtAdxSoundSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtAdxSoundSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtAdxSoundPayload> KeyValues;
    
public:
    FMovieSceneEvtAdxSoundSectionData();
};

