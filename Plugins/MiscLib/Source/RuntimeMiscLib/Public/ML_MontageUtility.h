#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ML_MontageUtility.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class RUNTIMEMISCLIB_API UML_MontageUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UML_MontageUtility();
    UFUNCTION(BlueprintCallable)
    static void SetBlendOut(UAnimMontage* AnimMontage, float Time);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBlendInOutAutoWithParam(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* AnimMontage, FName SectionName, float DecreaseBlendTime);
    
    UFUNCTION(BlueprintCallable)
    static bool SetBlendInAuto(USkeletalMeshComponent* SkeletalMeshComp, UAnimMontage* AnimMontage, FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    static void SetBlendIn(UAnimMontage* AnimMontage, float Time);
    
    UFUNCTION(BlueprintCallable)
    static FName GetNextSectionName(UAnimMontage* AnimMontage, FName SectionName, bool& Success);
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendOut(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static float GetBlendIn(UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAnimationSequence(UAnimMontage* AnimMontage, FName SlotName, FName SectionName, UAnimSequenceBase*& AnimSequence);
    
};

