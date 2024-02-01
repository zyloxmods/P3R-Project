#include "PersonaBaseCore.h"
#include "Components/SkeletalMeshComponent.h"

APersonaBaseCore::APersonaBaseCore() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh0"));
}

