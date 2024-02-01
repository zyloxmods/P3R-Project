#pragma once
#include "CoreMinimal.h"
#include "AtlEvtEventManagerInitializer.generated.h"

class UMovieSceneSequencePlayer;

USTRUCT(BlueprintType)
struct FAtlEvtEventManagerInitializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieSceneSequencePlayer* EventSequencePlayer;
    
    XRD777_API FAtlEvtEventManagerInitializer();
};

