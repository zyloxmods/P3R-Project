#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAppPauseType.h"
#include "AppPauseManagerSubsystem.generated.h"

class UAppPauseList;

UCLASS(Blueprintable)
class XRD777_API UAppPauseManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EAppPauseType> PauseFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppPauseList* AppPauseables;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppPauseList* AppPaused[4];
    
public:
    UAppPauseManagerSubsystem();
    UFUNCTION(BlueprintCallable)
    void UnPause();
    
    UFUNCTION(BlueprintCallable)
    void Pause(EAppPauseType InPauseType);
    
    UFUNCTION(BlueprintCallable)
    bool IsPause(EAppPauseType& PauseType);
    
};

