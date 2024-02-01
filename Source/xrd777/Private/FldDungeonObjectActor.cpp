#include "FldDungeonObjectActor.h"

void AFldDungeonObjectActor::HitOutNotice(AActor* OtherActor) {
}

void AFldDungeonObjectActor::HitInNotice(AActor* OtherActor) {
}

void AFldDungeonObjectActor::HitActionNotice(APawn* Player) {
}

AFldDungeonObjectActor::AFldDungeonObjectActor() {
    this->ObjType = EDungeonObjType::Blank;
    this->InitAnimNo = 0;
    this->HitAnimNo = 1;
    this->EndAnimNo = 2;
    this->m_pBaseObject = NULL;
    this->m_pBox = NULL;
}

