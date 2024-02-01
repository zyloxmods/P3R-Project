#include "FldPartnerComp.h"

float UFldPartnerComp::GetWalkThreshold() const {
    return 0.0f;
}

float UFldPartnerComp::GetRunThreshold() const {
    return 0.0f;
}

float UFldPartnerComp::GetDashThreshold() const {
    return 0.0f;
}

UFldPartnerComp::UFldPartnerComp() {
    this->AppCharacter = NULL;
    this->LipComp = NULL;
    this->SimpleLipComp = NULL;
    this->ControllerRef = NULL;
    this->PartyID = 0;
    this->bAllowStandbyToFinish = false;
    this->State = EFldPartnerState::None;
    this->NextState = EFldPartnerState::None;
    this->Behavior = EFldPartnerBehavior::None;
    this->NextBehavior = EFldPartnerBehavior::None;
    this->TrackingPointId = 0;
    this->PersonalMotionComp = NULL;
}

