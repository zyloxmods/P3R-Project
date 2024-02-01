#include "BtlSkill.h"

float ABtlSkill::CalcOnlyAbsorptionTime(int32 Index) const {
    return 0.0f;
}

ABtlSkill::ABtlSkill() {
    this->DestroyTime = 0.00f;
    this->DamageTime = 0.00f;
    this->WaitUntilDestroy = false;
    this->QuickAbsorptionEffectWhenAbsorptionOnly = false;
    this->EnvAnimTime = 0.10f;
    this->UseLightEnvParam = true;
    this->LightIntensityRatio = 0.20f;
    this->UseFogEnvParam = true;
    this->FogPower = 0.80f;
    this->FogDistance = 2000.00f;
    this->FogGradationRange = 0.00f;
    this->UseBGBlack = false;
    this->BGBlackPower = 0.00f;
    this->IsOnlyAbsorptionMode = false;
}

