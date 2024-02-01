#include "UITutorial.h"

AUITutorial::AUITutorial() {
    this->Loader = NULL;
    this->BattleDataTableAsset = NULL;
    this->BattleNameTableAsset = NULL;
    this->DungeonDataTableAsset = NULL;
    this->DungeonNameTableAsset = NULL;
    this->DailyDataTableAsset = NULL;
    this->DailyNameTableAsset = NULL;
    this->CombineDataTableAsset = NULL;
    this->CombineNameTableAsset = NULL;
    this->SystemDataTableAsset = NULL;
    this->SystemNameTableAsset = NULL;
    this->pMainActor = NULL;
    this->pTutorialDraw = NULL;
    this->pTutorialDrawClass = NULL;
}

