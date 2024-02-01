#include "HT_UMGTestGameModeBase.h"
#include "Templates/SubclassOf.h"

void AHT_UMGTestGameModeBase::ChangeMenuWidget(TSubclassOf<UUserWidget> NewWidgetClass) {
}

AHT_UMGTestGameModeBase::AHT_UMGTestGameModeBase() {
    this->StartingWidgetClass = NULL;
    this->CurrentWidget = NULL;
}

