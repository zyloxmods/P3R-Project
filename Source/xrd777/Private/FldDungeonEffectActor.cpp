#include "FldDungeonEffectActor.h"

void AFldDungeonEffectActor::SetPlayEnd() {
}

void AFldDungeonEffectActor::RequestFadeOut() {
}

bool AFldDungeonEffectActor::IsPlay() {
    return false;
}

float AFldDungeonEffectActor::GetPlayTime() {
    return 0.0f;
}

float AFldDungeonEffectActor::GetFadeValue() {
    return 0.0f;
}

float AFldDungeonEffectActor::GetFadeOutTime() {
    return 0.0f;
}

float AFldDungeonEffectActor::GetFadeInTime() {
    return 0.0f;
}



AFldDungeonEffectActor::AFldDungeonEffectActor() {
    this->Type = EDungeonEffectType::Dark;
    this->fadeInTime = 0.00f;
    this->fadeOutTime = 0.00f;
    this->m_pNiagara = NULL;
}

