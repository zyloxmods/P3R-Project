#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AnimInstanceCore.generated.h"

class AActor;
class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class CHARACTERBASE_API UAnimInstanceCore : public UAnimInstance {
    GENERATED_BODY()
public:
    UAnimInstanceCore();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOverrideLocomotionNotMoveAnim(UAnimSequence* InAnimSeq);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLookAtWorldLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLookAtType(uint8 LookAtType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLookAtTargetActorBoneName(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLookAtTargetActor(AActor* TargetActor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaySlotAnimation(FName InAnimSlotName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FVector GetLookAtWorldLocation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    uint8 GetLookAtType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FString GetLookAtTargetActorBoneName();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    AActor* GetLookAtTargetActor();
    
};

