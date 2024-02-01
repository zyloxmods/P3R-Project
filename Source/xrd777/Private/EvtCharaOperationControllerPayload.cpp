#include "EvtCharaOperationControllerPayload.h"

FEvtCharaOperationControllerPayload::FEvtCharaOperationControllerPayload() {
    this->OperationID = EEvtCharaOperationType::Invalid;
    this->FootStepLabelType = EEvtCharaOperationFootStepLabelType::Dynamic;
}

