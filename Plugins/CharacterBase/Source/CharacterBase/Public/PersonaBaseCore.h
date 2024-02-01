#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PersonaBaseCore.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class CHARACTERBASE_API APersonaBaseCore : public APawn {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
public:
    APersonaBaseCore();
};

