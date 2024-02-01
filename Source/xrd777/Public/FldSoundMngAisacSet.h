#pragma once
#include "CoreMinimal.h"
#include "FldSoundMngAisacSet.generated.h"

USTRUCT(BlueprintType)
struct FFldSoundMngAisacSet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mAisacID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mNowValume;
    
    XRD777_API FFldSoundMngAisacSet();
};

