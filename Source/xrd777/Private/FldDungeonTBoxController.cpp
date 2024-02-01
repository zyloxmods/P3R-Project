#include "FldDungeonTBoxController.h"

void UFldDungeonTBoxController::HitEvent(EDungeonObjHitEvent EventType, int32 ID, AFldDungeonObjectActor* pObject) {
}

void UFldDungeonTBoxController::ForbiddenDoorHitEvent(EDungeonObjHitEvent EventType, int32 ID, AFldDungeonObjectActor* pObject) {
}

void UFldDungeonTBoxController::FixedFloorAdvanceProcess() {
}

void UFldDungeonTBoxController::DesignFloorAdvanceProcess() {
}

void UFldDungeonTBoxController::AutoFloorAdvanceProcess() {
}

UFldDungeonTBoxController::UFldDungeonTBoxController() {
    this->m_HitTBox = NULL;
}

