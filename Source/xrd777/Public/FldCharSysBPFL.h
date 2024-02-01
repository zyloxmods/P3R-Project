#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FldCharSysBPFL.generated.h"

class UAnimMontage;
class UAnimSequenceBase;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API UFldCharSysBPFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFldCharSysBPFL();
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* PlayAnimSequence(USkeletalMeshComponent* Target, UAnimSequenceBase* Anim, bool Loop);
    
};

