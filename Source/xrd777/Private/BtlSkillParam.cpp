#include "BtlSkillParam.h"

FBtlSkillParam::FBtlSkillParam() {
    this->VFX = NULL;
    this->TargetType = EBtlSkillTargetType::BTL_SKILL_TARGET_CHARACTERS;
    this->PositionType = EBtlSkillPositionTargetType::BTL_SKILL_POS_TARGETS_ROOT;
    this->PositionHeight = EBtlSkillPositionHeightType::BTL_SKILL_POS_H_GROUND;
    this->Direction = EBtlSkillDirectionTargetType::BTL_SKILL_DIR_FRONT;
    this->Scale = 0.00f;
    this->StartTime = 0.00f;
    this->IntervalTime = 0.00f;
    this->IsDamageEffect = false;
    this->SkillSE = NULL;
    this->SEVolumeRatio = 0.00f;
    this->SE_UseCameraRangeParam = false;
    this->SE_CameraRangeMaxCM = 0.00f;
}

