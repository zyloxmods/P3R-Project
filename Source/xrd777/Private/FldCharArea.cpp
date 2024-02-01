#include "FldCharArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AFldCharArea::AFldCharArea() {
    this->RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->AreaComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Area"));
}

