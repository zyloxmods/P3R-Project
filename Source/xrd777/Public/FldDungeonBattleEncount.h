#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "FldDungeonBattleEncount.generated.h"

class ACharacter;

UCLASS(Blueprintable)
class XRD777_API AFldDungeonBattleEncount : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* m_pCharacter;
    
public:
    AFldDungeonBattleEncount();
    UFUNCTION(BlueprintCallable)
    void WaitVisible();
    
    UFUNCTION(BlueprintCallable)
    void WaitFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void WaitEnd();
    
    UFUNCTION(BlueprintCallable)
    void Idle();
    
    UFUNCTION(BlueprintCallable)
    void ExcuteWipe();
    
    UFUNCTION(BlueprintCallable)
    void End();
    
    UFUNCTION(BlueprintCallable)
    void CaptureWait();
    
};

