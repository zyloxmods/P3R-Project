#include "FldPlayerStart.h"
#include "Components/SceneComponent.h"

AFldPlayerStart::AFldPlayerStart() : APlayerStart(FObjectInitializer::Get()) {
    this->mIndex_ = 0;
    this->CameraDir = CreateDefaultSubobject<USceneComponent>(TEXT("CameraDirection"));
}

