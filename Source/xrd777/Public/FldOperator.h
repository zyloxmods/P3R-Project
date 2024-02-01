#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EFldOperatorEncountType.h"
#include "EFldOperatorKeyState.h"
#include "EFldOperatorState.h"
#include "FldEnemyHolder.h"
#include "FldPartnerHolder.h"
#include "FldPlayerHolder.h"
#include "FldOperator.generated.h"

class AController;
class AFldCamera;
class AFldCameraFree;
class AFldHitCore;
class AKernelInput;
class APawn;
class UFldOperationCamera;
class UFldOperationPlayer;
class UFldOperationPrePhysics;

UCLASS(Blueprintable)
class XRD777_API AFldOperator : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldOperationCamera* OpCameraComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldOperationPlayer* OpPlayerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldOperationPrePhysics* OpPrePhysicsComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCamera* MainCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldCameraFree* FreeCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerHolder PlayerHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AKernelInput* KernelInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldHitCore*> OverloapHits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldOperatorKeyState KeyState;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldOperatorState State;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldOperatorState NextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyHolder EncountEnemy;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldOperatorEncountType EncountType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPartnerHolder AssembleEvent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugStandalone;
    
    AFldOperator();
    UFUNCTION(BlueprintCallable)
    void Setup(AKernelInput* NewKernelInput, APawn* Player, AFldCameraFree* NewFreeCamera, AFldCamera* Camera);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeCameraYaw(const float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetFreeCameraPitch(const float Angle);
    
    UFUNCTION(BlueprintCallable)
    void KeyEnable(const bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void FreeCameraReset();
    
    UFUNCTION(BlueprintCallable)
    void EndEvent(bool bNotCameraReset);
    
    UFUNCTION(BlueprintCallable)
    void Cleanup();
    
    UFUNCTION(BlueprintCallable)
    void BeginFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void BeginFadeIn();
    
    UFUNCTION(BlueprintCallable)
    void BeginEvent();
    
};

