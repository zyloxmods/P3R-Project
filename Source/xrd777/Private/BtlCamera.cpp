#include "BtlCamera.h"

void ABtlCamera::SetCameraTargets(TArray<ABtlActor*> Targets) {
}

void ABtlCamera::SetCameraMainCharacter(ABtlActor* NewCameraMainCharacter) {
}

TArray<ABtlActor*> ABtlCamera::GetCameraTargets() {
    return TArray<ABtlActor*>();
}

ABtlActor* ABtlCamera::GetCameraMainCharacter() {
    return NULL;
}

ABtlCamera::ABtlCamera() {
    this->cameraMainCharacter = NULL;
    this->MainCamera = NULL;
}

