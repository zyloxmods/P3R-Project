#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestCharacter3.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ATestCharacter3 : public ACharacter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh3;
    
    ATestCharacter3();
};

