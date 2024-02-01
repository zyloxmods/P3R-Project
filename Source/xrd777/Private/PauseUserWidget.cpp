#include "PauseUserWidget.h"

void UPauseUserWidget::SetTickableWhenPaused(bool bTickableWhenPaused) {
}

bool UPauseUserWidget::GetTickableWhenPaused() {
    return false;
}

UPauseUserWidget::UPauseUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bTickEvenWhenPaused = false;
}

