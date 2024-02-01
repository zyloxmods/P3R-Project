#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Character.h"
#include "FootIKSetupParam.h"
#include "IKCharacterBase.generated.h"

class UIKAnimInstanceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AIKCharacterBase : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* IKMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIKAnimInstanceBase* IKAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFootIKSetupParam IKSetupParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCapsuleHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TestLeg;
    
public:
    AIKCharacterBase();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInterpRotator(UPARAM(Ref) FRotator& Value, FRotator Target, float InterpSpeed, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInterpFloat(UPARAM(Ref) float& Value, float Target, float InterpSpeed, float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCapsuleHalfHeight(float HipOffset, bool bResetCapsule, float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateAnimInstanceParams();
    
protected:
    UFUNCTION(BlueprintCallable)
    void TickUpdateIK(float DeltaSeconds);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitializeIKSetup(bool bEnable, USkeletalMeshComponent* InTargetMesh, UIKAnimInstanceBase* InIKAnimInstance);
    
    UFUNCTION(BlueprintCallable)
    void EnableIK();
    
    UFUNCTION(BlueprintCallable)
    void DisableIK();
    
};

