#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaPropAttachPayload.h"
#include "MovieSceneEvtCharaPropAttachSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtCharaPropAttachSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaPropAttachPayload> KeyValues;
    
public:
    FMovieSceneEvtCharaPropAttachSectionData();
};

