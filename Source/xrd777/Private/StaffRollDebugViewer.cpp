#include "StaffRollDebugViewer.h"

AStaffRollDebugViewer::AStaffRollDebugViewer() {
    this->mpBfAsset = NULL;
    this->Loader_ = NULL;
    this->mpActor = NULL;
    this->isBFAsset = false;
    this->bStartScript = false;
    this->pStaffRollSys = NULL;
}

