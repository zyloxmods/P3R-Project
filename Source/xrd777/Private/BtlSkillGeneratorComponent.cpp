#include "BtlSkillGeneratorComponent.h"

bool UBtlSkillGeneratorComponent::RequestCreateSkill(int32 skillId) {
    return false;
}

ABtlSkill* UBtlSkillGeneratorComponent::GetSkill() {
    return NULL;
}

UBtlSkillGeneratorComponent::UBtlSkillGeneratorComponent() {
    this->pSkill = NULL;
    this->SkillAsset = NULL;
    this->Loader = NULL;
    this->LoadRequested = false;
}

