#include "BtlGuiEncountWipe.h"

void ABtlGuiEncountWipe::SetTransform(FTransform Transform) {
}

void ABtlGuiEncountWipe::SetCharacterVisible(bool Visible) {
}

void ABtlGuiEncountWipe::SetCharacterAttackAnim() {
}

UAppCharacterComp* ABtlGuiEncountWipe::GetCharacterComp() {
    return NULL;
}

float ABtlGuiEncountWipe::GetCharacterAnimTime() {
    return 0.0f;
}

void ABtlGuiEncountWipe::EndWipe() {
}

ABtlGuiEncountWipe::ABtlGuiEncountWipe() {
    this->Chara = NULL;
    this->IsEnd = false;
}

