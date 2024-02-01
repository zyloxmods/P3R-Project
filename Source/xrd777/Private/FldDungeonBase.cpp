#include "FldDungeonBase.h"
#include "Components/SceneComponent.h"

AFldDungeonBase::AFldDungeonBase() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->m_pEnvSEActor = NULL;
    this->m_pFloorAutoGenerator = NULL;
    this->m_pEnemyManager = NULL;
    this->m_pPartnerManager = NULL;
    this->m_ControlComponent.AddDefaulted(24);
    this->m_pDungeonParam = NULL;
}

