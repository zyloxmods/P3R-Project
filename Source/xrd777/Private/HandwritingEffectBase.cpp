#include "HandwritingEffectBase.h"
#include "AtomComponent.h"
#include "NiagaraComponent.h"

AHandwritingEffectBase::AHandwritingEffectBase() {
    this->NiagaraComp = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraComp"));
    this->AtomComp = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComp"));
}

