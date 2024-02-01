#include "AnimNotifyState_TimedNiagaraEffectEx.h"

UAnimNotifyState_TimedNiagaraEffectEx::UAnimNotifyState_TimedNiagaraEffectEx() {
    this->Template = NULL;
    this->bAbsoluteLocation = false;
    this->bAbsoluteRotation = false;
    this->bAbsoluteScale = false;
    this->bUseOffsetRootLocation = false;
    this->bUseOffsetRootRotation = false;
    this->bUseOffsetRootScale = false;
    this->bDestroyAtEnd = false;
    this->Component = NULL;
}

