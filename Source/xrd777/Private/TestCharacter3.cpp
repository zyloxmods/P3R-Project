#include "TestCharacter3.h"
#include "Components/SkeletalMeshComponent.h"

ATestCharacter3::ATestCharacter3() {
    this->Mesh2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh2"));
    this->Mesh3 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3"));
}

