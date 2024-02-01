#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaPackAnimationPayload.h"
#include "MovieSceneEvtCharaPackAnimationSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtCharaPackAnimationSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaPackAnimationPayload> KeyValues;
    
public:
    FMovieSceneEvtCharaPackAnimationSectionData();
};
