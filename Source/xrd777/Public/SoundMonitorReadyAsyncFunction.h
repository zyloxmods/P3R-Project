#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedMyFunctionDelegate.h"
#include "SoundMonitorReadyAsyncFunction.generated.h"

class UObject;
class USoundMonitorReadyAsyncFunction;

UCLASS(Blueprintable)
class XRD777_API USoundMonitorReadyAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedMyFunction Completed;
    
    USoundMonitorReadyAsyncFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundMonitorReadyAsyncFunction* SoundMonitorReadyAsyncFunction(UObject* WorldContextObject);
    
};

