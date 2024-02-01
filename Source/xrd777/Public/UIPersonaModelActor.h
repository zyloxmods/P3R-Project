#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UIPersonaModelActor.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AUIPersonaModelActor : public APawn {
    GENERATED_BODY()
public:
    AUIPersonaModelActor();
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetSkeletalMesh();
    
};

