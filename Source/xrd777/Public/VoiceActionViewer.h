#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "VoiceActionViewer.generated.h"

class AUIVoiceAction;

UCLASS(Blueprintable)
class XRD777_API AVoiceActionViewer : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIVoiceAction* pActionVoiceSystem;
    
public:
    AVoiceActionViewer();
};

