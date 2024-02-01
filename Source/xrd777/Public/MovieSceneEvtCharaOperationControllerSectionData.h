#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Channels/MovieSceneChannel.h"
#include "EvtCharaOperationControllerPayload.h"
#include "MovieSceneEvtCharaOperationControllerSectionData.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneEvtCharaOperationControllerSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEvtCharaOperationControllerPayload> KeyValues;
    
public:
    XRD777_API FMovieSceneEvtCharaOperationControllerSectionData();
};

