#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UtlBpObjManager.generated.h"

class UUtlBpObjCore;

UCLASS(Blueprintable)
class XRD777_API UUtlBpObjManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUtlBpObjCore* mObject_;
    
public:
    UUtlBpObjManager();
    UFUNCTION(BlueprintCallable)
    void SetEventEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetBluePrint(UUtlBpObjCore* BpObjCore);
    
    UFUNCTION(BlueprintCallable)
    UUtlBpObjCore* CreateBluePrint(UClass* ObjectClass);
    
};

