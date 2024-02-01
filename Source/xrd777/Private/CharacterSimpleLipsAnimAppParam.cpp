#include "CharacterSimpleLipsAnimAppParam.h"

FCharacterSimpleLipsAnimAppParam::FCharacterSimpleLipsAnimAppParam() {
    this->CharcterCategoryType = EAppCharCategoryType::None;
    this->CharaIndexID = 0;
    this->RequestedTotalTime = 0.00f;
    this->LipsPlayRate = 0.00f;
    this->StartLipsDelaySec = 0.00f;
    this->LipACustomCurve = NULL;
    this->CharaActorPtr = NULL;
    this->PlayerMajorID = 0;
    this->PlayerMinorID = 0;
}

