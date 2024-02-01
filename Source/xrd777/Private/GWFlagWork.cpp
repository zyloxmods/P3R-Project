#include "GWFlagWork.h"

UGWFlagWork::UGWFlagWork() {
    this->pBattleDataTable = NULL;
    this->pCommuDataTable = NULL;
    this->pEventDataTable = NULL;
    this->pFieldDataTable = NULL;
    this->pProgramDataTable = NULL;
    this->pSystemDataTable = NULL;
    this->pCounterDataTable = NULL;
    this->BattleDataHashNum = 0;
    this->CommuDataHashNum = 0;
    this->EventDataHashNum = 0;
    this->FieldDataHashNum = 0;
    this->ProgramDataHashNum = 0;
    this->SystemDataHashNum = 0;
    this->CounterDataHashNum = 0;
    this->mFldLocalFlagDataTable_ = NULL;
    this->mFldLocalFlagDataHashNum_ = 0;
    this->mFldLocalCounterDataTable_ = NULL;
    this->mFldLocalCounterDataHashNum_ = 0;
    this->mFldNpcFlagDataTable_ = NULL;
    this->mFldNpcFlagDataHashNum_ = 0;
}

