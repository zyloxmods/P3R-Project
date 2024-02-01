#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PadRumble.generated.h"

class UForceFeedbackEffect;

UCLASS(Blueprintable)
class XRD777_API UPadRumble : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* haveRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* haveRumble2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ProgramEffect;
    
public:
    UPadRumble();
};

