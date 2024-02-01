#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtScriptPayload.h"
#include "MovieSceneEvtScriptSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtScriptSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtScriptPayload> KeyValues;
    
public:
    FMovieSceneEvtScriptSectionData();
};

