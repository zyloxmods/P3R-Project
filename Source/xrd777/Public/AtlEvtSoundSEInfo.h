#pragma once
#include "CoreMinimal.h"
#include "AtlEvtSoundSEInfo.generated.h"

USTRUCT(BlueprintType)
struct FAtlEvtSoundSEInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 bankID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhileHighSpeed;
    
    XRD777_API FAtlEvtSoundSEInfo();
};

