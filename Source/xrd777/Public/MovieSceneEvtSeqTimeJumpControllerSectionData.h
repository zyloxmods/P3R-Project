#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtSeqTimeJumpControllerPayload.h"
#include "MovieSceneEvtSeqTimeJumpControllerSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtSeqTimeJumpControllerSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtSeqTimeJumpControllerPayload> KeyValues;
    
public:
    FMovieSceneEvtSeqTimeJumpControllerSectionData();
};

