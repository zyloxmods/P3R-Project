#pragma once
#include "CoreMinimal.h"
#include "EEvtAdxSoundFadeType.h"
#include "EvtAdxSoundFadePayload.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FEvtAdxSoundFadePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEvtAdxSoundFadeType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetVolume;
    
    FEvtAdxSoundFadePayload();
};

