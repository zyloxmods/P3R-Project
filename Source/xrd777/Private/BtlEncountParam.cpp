#include "BtlEncountParam.h"

FBtlEncountParam::FBtlEncountParam() {
    this->EncountID = 0;
    this->Preemptive = EBtlEncountPreemptive::Normal;
    this->PreemptiveOriginal = EBtlEncountPreemptive::Normal;
    this->StageMajor = 0;
    this->StageMinor = 0;
    this->EnemyBadStatus = 0;
    this->CalledFromScript = false;
    this->IsEventResult = false;
}

