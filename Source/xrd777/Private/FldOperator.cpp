#include "FldOperator.h"
#include "FldOperationCamera.h"
#include "FldOperationPlayer.h"
#include "FldOperationPrePhysics.h"

void AFldOperator::Setup(AKernelInput* NewKernelInput, APawn* Player, AFldCameraFree* NewFreeCamera, AFldCamera* Camera) {
}

void AFldOperator::SetFreeCameraYaw(const float Angle) {
}

void AFldOperator::SetFreeCameraPitch(const float Angle) {
}

void AFldOperator::KeyEnable(const bool Enable) {
}

void AFldOperator::FreeCameraReset() {
}

void AFldOperator::EndEvent(bool bNotCameraReset) {
}

void AFldOperator::Cleanup() {
}

void AFldOperator::BeginFadeOut() {
}

void AFldOperator::BeginFadeIn() {
}

void AFldOperator::BeginEvent() {
}

AFldOperator::AFldOperator() {
    this->OpCameraComp = CreateDefaultSubobject<UFldOperationCamera>(TEXT("CameraOp"));
    this->OpPlayerComp = CreateDefaultSubobject<UFldOperationPlayer>(TEXT("PlayerOp"));
    this->OpPrePhysicsComp = CreateDefaultSubobject<UFldOperationPrePhysics>(TEXT("OpPrePhysicsComp"));
    this->MainCamera = NULL;
    this->FreeCamera = NULL;
    this->PlayerController = NULL;
    this->KernelInput = NULL;
    this->KeyState = EFldOperatorKeyState::None;
    this->State = EFldOperatorState::None;
    this->NextState = EFldOperatorState::None;
    this->EncountType = EFldOperatorEncountType::None;
    this->bDebugStandalone = false;
}

