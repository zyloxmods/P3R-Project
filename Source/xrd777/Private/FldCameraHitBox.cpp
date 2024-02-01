#include "FldCameraHitBox.h"
#include "Components/BoxComponent.h"

AFldCameraHitBox::AFldCameraHitBox() {
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Shape"));
    this->Camera = NULL;
}

