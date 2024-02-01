#include "ShuffleCardInfo.h"

FShuffleCardInfo::FShuffleCardInfo() {
    this->Card = NULL;
    this->BaseRotX = 0.00f;
    this->BaseRotZ = 0.00f;
    this->RotationX = 0.00f;
    this->RotationZ = 0.00f;
    this->SppedRotationX = 0.00f;
    this->SppedRotationZ = 0.00f;
    this->RotMoveXFrom = 0.00f;
    this->RotMoveXTo = 0.00f;
    this->RotMoveZFrom = 0.00f;
    this->RotMoveZTo = 0.00f;
    this->MoveLerpValue = 0.00f;
    this->MoveAfterState = EBtlShuffleCardState::BTL_SHUFFLECARD_WAIT;
    this->MoveTime = 0.00f;
    this->State = EBtlShuffleCardState::BTL_SHUFFLECARD_WAIT;
    this->Moving = false;
    this->isOutAnimeSelectEffect = false;
    this->SelectEffectAlpha = 0.00f;
    this->EffectSelectState = EBtlShuffleCardEffectSelectState::BTL_SHUFFLECARD_EFFECTSELECT_WAIT;
    this->ValueCardRotation = 0.00f;
    this->TimeWaitCardRotation = 0.00f;
    this->StateCardRotation = EBtlShuffleCardRotationState::BTL_SHUFFLECARD_ROTATION_WAIT;
    this->IsTickCard = false;
    this->IsStartMajorAppear = false;
    this->RotationMajorAppear = 0.00f;
}

