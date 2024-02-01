#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaAnimationPayload.h"
#include "MovieSceneEvtCharaAnimationSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaAnimationSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaAnimationPayload> KeyValues;
    
public:
    XRD777_API FMovieSceneEvtCharaAnimationSectionData();
};

