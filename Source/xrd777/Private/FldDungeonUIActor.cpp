#include "FldDungeonUIActor.h"

AFldDungeonUIActor::AFldDungeonUIActor() {
    this->Type = EDungeonUIType::SituationHelp;
    this->LayoutData = NULL;
    this->LayoutDataTable = NULL;
    this->m_pLoader = NULL;
}

