#include "FldDungeonPartActor.h"

AFldDungeonPartActor::AFldDungeonPartActor() {
    this->PartType = EPartType::Blank0;
    this->PartVariation = 0;
    this->PartDirType = EPartDirType::Up;
    this->ForbiddenDoor = false;
    this->MonadPassage = false;
    this->ExclusivelyForEvent = false;
    this->m_pLayoutRetDev = NULL;
    this->m_pLayoutNPC = NULL;
    this->m_pLayoutReaper = NULL;
    this->m_pLayoutClock = NULL;
    this->m_pLayoutSecretGate = NULL;
}

