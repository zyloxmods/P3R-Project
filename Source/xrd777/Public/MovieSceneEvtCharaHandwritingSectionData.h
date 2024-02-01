#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaHandwritingPayload.h"
#include "MovieSceneEvtCharaHandwritingSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtCharaHandwritingSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaHandwritingPayload> KeyValues;
    
public:
    FMovieSceneEvtCharaHandwritingSectionData();
};

