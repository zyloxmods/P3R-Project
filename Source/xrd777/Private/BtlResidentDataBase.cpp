#include "BtlResidentDataBase.h"


UNiagaraSystem* UBtlResidentDataBase::GetEffect(EBtlResidentResource Type) {
    return NULL;
}

bool UBtlResidentDataBase::CheckLoaded(EBtlResidentResource Type) {
    return false;
}

UBtlResidentDataBase::UBtlResidentDataBase() {
    this->SummonVFX = NULL;
    this->SummonShellVFX = NULL;
    this->HitSlashVFX = NULL;
    this->HitPierceVFX = NULL;
    this->HitStrikeVFX = NULL;
    this->ReflectionVFX = NULL;
    this->AbsorptionVFX = NULL;
    this->PersonaAuraVFX = NULL;
    this->PersonaAuraShineVFX = NULL;
    this->ShadowSummonVFX = NULL;
    this->ShadowDeadVFX = NULL;
    this->ShadowDeadSplashVFX = NULL;
    this->HitPierceVFX_YukariCritical = NULL;
    this->Loader = NULL;
    this->LoadedResidentData = false;
}

