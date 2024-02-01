#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtMoviePayload.h"
#include "MovieSceneEvtMovieSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtMovieSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtMoviePayload> KeyValues;
    
public:
    FMovieSceneEvtMovieSectionData();
};

