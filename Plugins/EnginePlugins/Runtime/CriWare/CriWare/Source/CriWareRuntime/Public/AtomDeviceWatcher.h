#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EAtomDeviceType.h"
#include "AtomDeviceWatcher.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UAtomDeviceWatcher : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeviceUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeviceUpdated OnDeviceUpdated;
    
    UAtomDeviceWatcher();
    UFUNCTION(BlueprintCallable)
    EAtomDeviceType GetDeviceType(int32 ASRRackID);
    
    UFUNCTION(BlueprintCallable)
    FString GetDeviceName();
    
    UFUNCTION(BlueprintCallable)
    int32 GetDeviceChannelCount(int32 ASRRackID);
    
};

