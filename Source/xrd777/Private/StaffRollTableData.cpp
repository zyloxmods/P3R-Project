#include "StaffRollTableData.h"

FStaffRollTableData::FStaffRollTableData() {
    this->StaffRollIndex = 0;
    this->Fistyle = 0;
    this->Sstyle = 0;
    this->Tstyle = 0;
    this->Fostyle = 0;
    this->Fisize = 0;
    this->Ssize = 0;
    this->Tsize = 0;
    this->Fosize = 0;
    this->Command = 0;
    this->SecondCommand = 0;
    this->ThirdCommand = 0;
    this->ForthCommand = 0;
    this->LineCount = 0;
    this->LineCommand = false;
    this->EmptyCount = 0;
    this->StartWaitSeconds = 0.00f;
    this->FinishSeconds = 0.00f;
    this->LastSeconds = 0.00f;
}

