#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtAdxSoundFadePayload.h"
#include "MovieSceneEvtAdxSoundFadeSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtAdxSoundFadeSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtAdxSoundFadePayload> KeyValues;
    
public:
    FMovieSceneEvtAdxSoundFadeSectionData();
};

