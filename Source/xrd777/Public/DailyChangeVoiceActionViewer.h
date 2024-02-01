#pragma once
#include "CoreMinimal.h"
#include "DebugViewer.h"
#include "DailyChangeVoiceActionViewer.generated.h"

class AUIDebugReceiveVoiceAction;

UCLASS(Blueprintable)
class XRD777_API ADailyChangeVoiceActionViewer : public ADebugViewer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIDebugReceiveVoiceAction* mVoiceConnect_;
    
public:
    ADailyChangeVoiceActionViewer();
};

