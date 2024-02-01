#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFLBtlAnimation.generated.h"

class UAnimMontage;
class UAnimSequence;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API UBFLBtlAnimation : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBFLBtlAnimation();
    UFUNCTION(BlueprintCallable)
    static void StopMontageAnimation(USkeletalMeshComponent* InSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void SetMontagePositionInSection(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, FName SectionName, float PositionInSection);
    
    UFUNCTION(BlueprintCallable)
    static void SetMontageAnimationSpeed(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    static float GetRemainingTimeFromCurrentSection(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* AnimMontage);
    
    UFUNCTION(BlueprintCallable)
    static float GetMontageSectionLength(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* AnimMontage, FName SectionName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMontageNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName& NextSectionName);
    
    UFUNCTION(BlueprintCallable)
    static bool GetMontageAlignedNextSectionName(UAnimMontage* AnimMontage, FName SectionName, FName& NextSectionName);
    
    UFUNCTION(BlueprintCallable)
    static FName GetCurrentSectionName(USkeletalMeshComponent* InSkeletalMeshComponent);
    
    UFUNCTION(BlueprintCallable)
    static void ForcePoseUpdate(USkeletalMeshComponent* SkeletalMesh);
    
    UFUNCTION(BlueprintCallable)
    static void CoordinateDefaultAnimPose(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimSequence* AnimSequence);
    
    UFUNCTION(BlueprintCallable)
    static bool CheckMontageSectionIsLoop(UAnimMontage* AnimMontage, FName SectionName);
    
};

