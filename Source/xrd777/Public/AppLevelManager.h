#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AppLevelData.h"
#include "AppLevelManager.generated.h"

class AAppLvMngUnloadMonitorActor;

UCLASS(Blueprintable)
class XRD777_API UAppLevelManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FAppLevelData> mLevelTable_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AAppLvMngUnloadMonitorActor*> mMonitors_;
    
public:
    UAppLevelManager();
};

