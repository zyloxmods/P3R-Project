#include "AtlNiagaraActor.h"
#include "NiagaraComponent.h"

AAtlNiagaraActor::AAtlNiagaraActor() {
    this->NiagaraComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComponent0"));
}

