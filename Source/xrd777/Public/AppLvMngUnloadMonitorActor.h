#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AppLvMngUnloadMonitorActor.generated.h"

class UAppLevelManager;

UCLASS(Blueprintable)
class AAppLvMngUnloadMonitorActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mUniqueId_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLevelName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppLevelManager* mManager_;
    
public:
    AAppLvMngUnloadMonitorActor();
    UFUNCTION(BlueprintCallable)
    void OnEndExec();
    
};

