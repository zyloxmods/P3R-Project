#include "StaffRoll.h"

void AStaffRoll::Update(float DeltaTime) {
}

bool AStaffRoll::Start(int16 Type, bool RoundFlg) {
    return false;
}

void AStaffRoll::Draw() {
}

AStaffRoll::AStaffRoll() {
    this->m_pStaffRollDrawLoader = NULL;
    this->StaffRollDrawClass = NULL;
    this->pStaffRollDraw = NULL;
    this->pStaffRollDataList = NULL;
    this->pStaffRollMovie = NULL;
    this->pStaffRollFont = NULL;
}

