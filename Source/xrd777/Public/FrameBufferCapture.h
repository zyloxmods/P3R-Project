#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FrameBufferCaptureDebugWork.h"
#include "FrameBufferCapture.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFrameBufferCapture : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameBufferCaptureDebugWork> DebugInfo;
    
public:
    UFrameBufferCapture();
};

