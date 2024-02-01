#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "ENpcAnimLookAtType.h"
#include "NpcAnimationBaseCore.generated.h"

class AActor;
class UAnimSequenceBase;

UCLASS(Blueprintable, NonTransient)
class CHARACTERBASE_API UNpcAnimationBaseCore : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENpcAnimLookAtType LookAtType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtWorldLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LookAtTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LookAtTargetActorBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* IdolAnimSequence;
    
public:
    UNpcAnimationBaseCore();
    UFUNCTION(BlueprintCallable)
    void SetLookAtWorldLocation(FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtType(ENpcAnimLookAtType Type);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTargetActorBoneName(const FString& BoneName);
    
    UFUNCTION(BlueprintCallable)
    void SetLookAtTargetActor(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void SetIdolAnimSequnece(UAnimSequenceBase* Anim);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLookAtWorldLocation();
    
    UFUNCTION(BlueprintCallable)
    ENpcAnimLookAtType GetLookAtType();
    
    UFUNCTION(BlueprintCallable)
    FString GetLookAtTargetActorBoneName();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetLookAtTargetActor();
    
    UFUNCTION(BlueprintCallable)
    UAnimSequenceBase* GetIdolAnimSequnece();
    
};

