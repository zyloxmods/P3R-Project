#include "NiagaraActorExtends.h"
#include "NiagaraComponent.h"

void ANiagaraActorExtends::SpawnNiagaraSystem(UNiagaraSystem* InAsset, float InSpeed) {
}

void ANiagaraActorExtends::SetVisibleDebugArrow_DebugOnly(bool InVisible) {
}

void ANiagaraActorExtends::SetDesiredAge(float InDeltTime) {
}

void ANiagaraActorExtends::RestertEffect() {
}

void ANiagaraActorExtends::OnComplete(UNiagaraComponent* PSystem) {
}

UNiagaraParameterCollectionInstance* ANiagaraActorExtends::GetParameterCollectionInstance() {
    return NULL;
}

ANiagaraActorExtends* ANiagaraActorExtends::CreateNiagaraActorExtends(APlayerController* InPC, UNiagaraSystem* InAsset, float InSpeed) {
    return NULL;
}

ANiagaraActorExtends::ANiagaraActorExtends() {
    this->ParameterCollection = NULL;
    this->bIsPause = false;
    this->bISBillboard = false;
    this->PlaybackSpeed = 1.00f;
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
}

