#include "NiagaraCameraAttachComponent.h"

void UNiagaraCameraAttachComponent::SetAttachCam(USceneComponent* Parent) {
}

void UNiagaraCameraAttachComponent::PlayEffect() {
}

void UNiagaraCameraAttachComponent::OnLoadSystem() {
}

void UNiagaraCameraAttachComponent::OnComplete(UNiagaraComponent* PSystem) {
}

bool UNiagaraCameraAttachComponent::IsCallDestroy() {
    return false;
}

bool UNiagaraCameraAttachComponent::IsAssetLoaded() {
    return false;
}

UNiagaraComponent* UNiagaraCameraAttachComponent::GetParticleComponent() {
    return NULL;
}

UNiagaraCameraAttachComponent::UNiagaraCameraAttachComponent() {
    this->bAutoDestroy = true;
    this->bAsyncSystemLoad = true;
    this->SpawnNiagaraSystem = NULL;
    this->bIsAutoAttachCam = true;
    this->bIsAutPlay = true;
    this->ParticleComponent = NULL;
}

