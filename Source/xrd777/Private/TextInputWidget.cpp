#include "TextInputWidget.h"



bool UTextInputWidget::IsDrawLetterBoxDirHeight() {
    return false;
}

bool UTextInputWidget::IsChangeScreenSize() {
    return false;
}


void UTextInputWidget::Decide() {
}



float UTextInputWidget::CalcScreenScale() {
    return 0.0f;
}

float UTextInputWidget::CalcLetterBoxSize(float InTmpScreenSize) {
    return 0.0f;
}

UTextInputWidget::UTextInputWidget() : UUserWidget(FObjectInitializer::Get()) {
}

