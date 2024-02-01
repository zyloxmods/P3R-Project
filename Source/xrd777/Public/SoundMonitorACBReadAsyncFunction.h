#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedMyFunctionDelegate.h"
#include "SoundMonitorACBReadAsyncFunction.generated.h"

class UObject;
class USoundMonitorACBReadAsyncFunction;

UCLASS(Blueprintable)
class XRD777_API USoundMonitorACBReadAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedMyFunction Completed;
    
    USoundMonitorACBReadAsyncFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundMonitorACBReadAsyncFunction* SoundMonitorACBReadAsyncFunction(UObject* WorldContextObject, int32 acbBankID);
    
};

