#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvtDialogueOptionsParameters.h"
#include "EvtDialogueOptionsPayload.generated.h"

USTRUCT(BlueprintType)
struct FEvtDialogueOptionsPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneEvtDialogueOptionsParameters Parameters;
    
    XRD777_API FEvtDialogueOptionsPayload();
};

