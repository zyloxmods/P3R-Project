#include "EvtSeqControllerPayload.h"

FEvtSeqControllerPayload::FEvtSeqControllerPayload() {
    this->Operation = EEvtSeqControllerOperation::Invalid;
    this->ClosedEventMessageID = 0;
    this->JumpToSec = 0.00f;
    this->CameraBlendTime = 0.00f;
    this->NextTransitionLightScenarioIndex = 0;
}

