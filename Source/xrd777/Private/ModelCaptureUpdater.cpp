#include "ModelCaptureUpdater.h"

void AModelCaptureUpdater::OnSetTargetActor(AActor* AActor) {
}

AModelCaptureUpdater::AModelCaptureUpdater() {
    this->PreviewWorldUpdater_ = NULL;
    this->TargetActor_ = NULL;
    this->LightSource_ = NULL;
    this->BlueprintClass_ = NULL;
    this->Loader_ = NULL;
}

