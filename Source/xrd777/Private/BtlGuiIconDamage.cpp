#include "BtlGuiIconDamage.h"

FBtlGuiIconDamage::FBtlGuiIconDamage() {
    this->pTarget = NULL;
    this->Damage = 0;
    this->DamageSP = 0;
    this->Hit = EBtlGuiIconHit::BTL_ICON_HIT_NORMAL;
    this->DamageType = EBtlGuiIconDamageType::BTL_ICON_DAMAGE_NORMAL;
    this->isPortionDamage = false;
    this->isBadStatus = false;
    this->isBadStatusRecovery = false;
    this->isEndure = false;
    this->Delay = 0.00f;
    this->StepEndureRadio = 0.00f;
}

