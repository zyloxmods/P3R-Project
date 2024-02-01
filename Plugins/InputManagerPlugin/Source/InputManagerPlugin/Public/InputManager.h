#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "InputManager.generated.h"

class UInputComponent;

UCLASS(Blueprintable)
class INPUTMANAGERPLUGIN_API AInputManager : public APlayerController {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* mpDefaultInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* mpCurrentInputComponent;
    
public:
    AInputManager();
    UFUNCTION(BlueprintCallable)
    void EnableInputManager();
    
    UFUNCTION(BlueprintCallable)
    void DisableInputManager();
    
};

