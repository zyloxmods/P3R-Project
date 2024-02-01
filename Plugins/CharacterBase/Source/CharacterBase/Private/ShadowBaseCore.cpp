#include "ShadowBaseCore.h"
#include "Components/SkeletalMeshComponent.h"

AShadowBaseCore::AShadowBaseCore() {
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh0"));
}

