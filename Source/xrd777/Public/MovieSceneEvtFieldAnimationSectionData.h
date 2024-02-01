#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtFieldAnimationPayload.h"
#include "MovieSceneEvtFieldAnimationSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtFieldAnimationSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtFieldAnimationPayload> KeyValues;
    
public:
    FMovieSceneEvtFieldAnimationSectionData();
};

