#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "AsyncCompletedSoundManagerFunctionDelegate.h"
#include "SoundManagerReadyAsyncFunction.generated.h"

class UObject;
class UPlayAdxControl;
class USoundManagerReadyAsyncFunction;

UCLASS(Blueprintable)
class SOUNDMANAGER_API USoundManagerReadyAsyncFunction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAsyncCompletedSoundManagerFunction Completed;
    
    USoundManagerReadyAsyncFunction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USoundManagerReadyAsyncFunction* SoundManagerReadyAsyncFunction(UObject* WorldContextObject, UPlayAdxControl* Control, int32 bankID);
    
};

