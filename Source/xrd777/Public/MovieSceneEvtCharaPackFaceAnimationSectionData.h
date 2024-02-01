#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaPackFaceAnimationPayload.h"
#include "MovieSceneEvtCharaPackFaceAnimationSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaPackFaceAnimationSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaPackFaceAnimationPayload> KeyValues;
    
public:
    XRD777_API FMovieSceneEvtCharaPackFaceAnimationSectionData();
};

