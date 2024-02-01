#include "FldCameraBase.h"
#include "Camera/CameraComponent.h"
#include "Components/SceneComponent.h"

AFldCameraBase::AFldCameraBase() {
    this->YawSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("YawSceneComp"));
    this->PitchSceneComp = CreateDefaultSubobject<USceneComponent>(TEXT("PitchSceneComp"));
    this->CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
    this->HitRef = NULL;
    this->bIsCurrent = false;
    this->bZoom = false;
}

