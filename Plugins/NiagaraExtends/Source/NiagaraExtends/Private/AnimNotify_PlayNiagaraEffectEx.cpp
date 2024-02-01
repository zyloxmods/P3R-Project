#include "AnimNotify_PlayNiagaraEffectEx.h"

UNiagaraComponent* UAnimNotify_PlayNiagaraEffectEx::GetSpawnedEffect() const {
    return NULL;
}

UAnimNotify_PlayNiagaraEffectEx::UAnimNotify_PlayNiagaraEffectEx() {
    this->Template = NULL;
    this->bAbsoluteLocation = false;
    this->bAbsoluteRotation = false;
    this->bAbsoluteScale = false;
    this->bIsLoopEffect = false;
    this->Attached = true;
}

