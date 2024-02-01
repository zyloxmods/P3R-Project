#include "FldDungeonLayoutActor.h"

AFldDungeonLayoutActor::AFldDungeonLayoutActor() {
    this->LayoutType = ELayoutType::Blank;
    this->UsageType = ELayoutUsageType::Normal;
    this->GroupNo = ELayoutGroup::Blank;
    this->Dir = ELayoutDirType::Up;
    this->Wall = false;
    this->EventSpace = false;
}

