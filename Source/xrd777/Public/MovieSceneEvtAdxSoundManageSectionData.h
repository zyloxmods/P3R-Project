#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtAdxSoundManagePayload.h"
#include "MovieSceneEvtAdxSoundManageSectionData.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FMovieSceneEvtAdxSoundManageSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtAdxSoundManagePayload> KeyValues;
    
public:
    FMovieSceneEvtAdxSoundManageSectionData();
};

