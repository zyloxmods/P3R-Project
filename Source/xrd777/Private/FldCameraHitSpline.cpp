#include "FldCameraHitSpline.h"
#include "Components/BoxComponent.h"
#include "Components/SplineComponent.h"

void AFldCameraHitSpline::SetupCamera() {
}

AFldCameraHitSpline::AFldCameraHitSpline() {
    this->BoxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
    this->SplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComp"));
    this->CameraSplineComp = CreateDefaultSubobject<USplineComponent>(TEXT("CameraSplineComp"));
    this->ForwardType = EFldCameraForwardType::Camera;
    this->FreeForward = NULL;
    this->bTracking = true;
    this->TrackingDistance = 0.00f;
    this->TrackingBufferZone_Player = 100.00f;
    this->TrackingBufferZone_Camera = 50.00f;
    this->MarginYaw = 10.00f;
    this->MarginPitch = 10.00f;
    this->MarginSpeed = 60.00f;
    this->MarginForward = true;
    this->bFanShape = false;
    this->Yaw_FrontOffset = 600.00f;
    this->Yaw_BackOffset = -100.00f;
}

