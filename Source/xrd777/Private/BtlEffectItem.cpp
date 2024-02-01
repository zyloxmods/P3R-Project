#include "BtlEffectItem.h"

FBtlEffectItem::FBtlEffectItem() {
    this->ParentEmpActor = NULL;
    this->ObjectReference = NULL;
    this->Type = EBtlBadStatusIcon::Knockedout;
    this->BadStatus = false;
}

