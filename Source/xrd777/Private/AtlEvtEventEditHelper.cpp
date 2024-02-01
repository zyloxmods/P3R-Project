#include "AtlEvtEventEditHelper.h"

void AAtlEvtEventEditHelper::SetPreviewCrowdSettings(int32 InCrowdMonth, int32 InCrowdDay, ECldTimeZone InCrowdTimeZone, bool bInPreviewCrowd) {
}

void AAtlEvtEventEditHelper::OnLoadedLevelInPIE() {
}

bool AAtlEvtEventEditHelper::IsRankAEvent() const {
    return false;
}

AAtlEvtEventEditHelper::AAtlEvtEventEditHelper() {
    this->bLoadAllSublevels = false;
    this->EventCategoryType = EAtlEvtEventCategoryType::MAIN;
    this->bFieldEventInterpFieldCamera = false;
    this->PreviewTimeZone = ECldTimeZone::None;
    this->PreviewSeason = ECldSeason::Spring;
    this->bPreviewCrowd = false;
    this->PreviewCrowdMonth = 4;
    this->PreviewCrowdDay = 1;
    this->PreviewCrowdTimeZone = ECldTimeZone::Noon;
}

