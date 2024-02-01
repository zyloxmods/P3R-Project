#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtFadeScreenPayload.h"
#include "MovieSceneEvtFadeScreenSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtFadeScreenSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtFadeScreenPayload> KeyValues;
    
public:
    FMovieSceneEvtFadeScreenSectionData();
};

