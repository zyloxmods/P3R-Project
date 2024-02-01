#include "PreviewWorldUpdater.h"
#include "Templates/SubclassOf.h"

AActor* APreviewWorldUpdater::SpawnAttachedActor(TSubclassOf<AActor> ActorClass) {
    return NULL;
}

AActor* APreviewWorldUpdater::SetTargetActor(TSubclassOf<AActor> ActorClass, bool IsResetCamera) {
    return NULL;
}

void APreviewWorldUpdater::SetGazeOffsetBoneName(const FString& NewGazeOffsetBoneName) {
}

void APreviewWorldUpdater::SetGazeOffset(FVector NewGazeOffset) {
}

void APreviewWorldUpdater::SetGazeMode(bool NewGazeMode) {
}

void APreviewWorldUpdater::SetFoV(float NewFOV) {
}

void APreviewWorldUpdater::SetCameraTransform(FTransform NewCameraTransform) {
}

void APreviewWorldUpdater::SetCameraPosition(FVector NewCameraPosition) {
}

void APreviewWorldUpdater::SetCameraPosBoneName(const FString& NewCameraPosBoneName) {
}

void APreviewWorldUpdater::SetCameraAngle(FRotator NewCameraAngle) {
}

AActor* APreviewWorldUpdater::GetTargetActor() const {
    return NULL;
}

ASceneCapture2D* APreviewWorldUpdater::GetSceneCaptureActor() const {
    return NULL;
}

UWorld* APreviewWorldUpdater::GetPreviewWorld() const {
    return NULL;
}

void APreviewWorldUpdater::Cleanup() {
}

APreviewWorldUpdater::APreviewWorldUpdater() {
    this->PreviewWorld = NULL;
    this->FOV = 90.00f;
    this->IsGazeMode = true;
    this->OneShotEffect = NULL;
    this->SpawnPendingActorClass = NULL;
    this->bIsAntialias = true;
    this->bIsTAA = false;
    this->bIsToneCurves = true;
    this->bIsBloom = true;
    this->bIsMotionBlur = false;
    this->bIsExposure = false;
}

