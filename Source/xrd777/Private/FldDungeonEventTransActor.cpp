#include "FldDungeonEventTransActor.h"

void AFldDungeonEventTransActor::SetPartyTransform() {
}

AFldDungeonEventTransActor::AFldDungeonEventTransActor() {
    this->TransOriginType = EDungeonEventTransOriginType::Part;
    this->WithinTypeID = 0;
}

