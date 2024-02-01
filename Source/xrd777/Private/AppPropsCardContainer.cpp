#include "AppPropsCardContainer.h"

bool AAppPropsCardContainer::SyncCards() {
    return false;
}

void AAppPropsCardContainer::LoadCards(TArray<FAppPropsCardParam> Params) {
}

TArray<FAppPropsCardData> AAppPropsCardContainer::GetCards() {
    return TArray<FAppPropsCardData>();
}

void AAppPropsCardContainer::DestroyContainer(bool DestroyCardProps) {
}

AAppPropsCardContainer::AAppPropsCardContainer() {
    this->Loader = NULL;
    this->PersonaCardClass = NULL;
    this->MajorCardClass = NULL;
    this->MinorCardClass = NULL;
}

