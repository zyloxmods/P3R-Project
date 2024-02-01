#include "BtlAI.h"

int32 ABtlAI::GetPrevUseActionIDForActor(ABtlActor* Actor) {
    return 0;
}

ABtlAI::ABtlAI() {
    this->Character = NULL;
    this->Core = NULL;
    this->ActionType = EBtlCommandType::BTL_ACT_NULL;
    this->PrevActionType = EBtlCommandType::BTL_ACT_NULL;
    this->ActionID = 0;
    this->ActionSkillID = 0;
    this->ActionItemID = 0;
    this->PrevActionID = 0;
    this->MinorParam = 0;
    this->ReceiveSkillAttr = EBtlDataAttr::BTL_DATA_ATTR_NON;
}

