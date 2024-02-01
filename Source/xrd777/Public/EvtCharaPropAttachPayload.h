#pragma once
#include "CoreMinimal.h"
#include "MovieSceneObjectBindingID.h"
#include "EAtlEvtPropAttachType.h"
#include "EvtCharaPropAttachPayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtCharaPropAttachPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlEvtPropAttachType PropAttachType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID PropActorBindingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectBindingID PropActorDetachPointBindingID;
    
    FEvtCharaPropAttachPayload();
};

