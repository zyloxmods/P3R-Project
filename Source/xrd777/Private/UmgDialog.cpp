#include "UmgDialog.h"


void UUmgDialog::SetEndFlag() {
}

bool UUmgDialog::IsStreamingTouch() {
    return false;
}

bool UUmgDialog::IsInputBlocked() {
    return false;
}

bool UUmgDialog::IsChangeScreenSize() {
    return false;
}

float UUmgDialog::CalcScreenScale() {
    return 0.0f;
}

UUmgDialog::UUmgDialog() : UUserWidget(FObjectInitializer::Get()) {
}

