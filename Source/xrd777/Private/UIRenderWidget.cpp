#include "UIRenderWidget.h"

void UUIRenderWidget::SetPause(bool inPause) {
}

bool UUIRenderWidget::IsPause() {
    return false;
}

bool UUIRenderWidget::Initialize(UTextureRenderTarget2D* inRenderTarget, UUserWidget* inRenderWidget, FVector2D DrawSize, bool inUseGamma, bool inClearTarget, TEnumAsByte<TextureFilter> inFilter) {
    return false;
}

void UUIRenderWidget::DrawToRenderTarget() {
}

UUIRenderWidget::UUIRenderWidget() {
    this->RenderTarget = NULL;
    this->RenderWidget = NULL;
}

