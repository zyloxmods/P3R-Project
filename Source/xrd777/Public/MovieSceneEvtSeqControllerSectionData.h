#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtSeqControllerPayload.h"
#include "MovieSceneEvtSeqControllerSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtSeqControllerSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtSeqControllerPayload> KeyValues;
    
public:
    FMovieSceneEvtSeqControllerSectionData();
};

