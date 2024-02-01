#include "BtlGuiDrawObjectCore.h"

void UBtlGuiDrawObjectCore::SetScaleVec2(FVector2D Scale) {
}

void UBtlGuiDrawObjectCore::SetScaleAnchorPos(FVector2D anchor) {
}

void UBtlGuiDrawObjectCore::SetScale(float Scale) {
}

void UBtlGuiDrawObjectCore::SetPos(FVector2D Pos) {
}

void UBtlGuiDrawObjectCore::SetColor(FColor Color) {
}

void UBtlGuiDrawObjectCore::SetChildObject(UBtlGuiDrawObjectCore* Object, FBtlGuiDrawFlag flag) {
}

void UBtlGuiDrawObjectCore::SetAngleAnchorPos(FVector2D anchor) {
}

void UBtlGuiDrawObjectCore::SetAngle(float Angle) {
}

void UBtlGuiDrawObjectCore::SetAnchorPos(FVector2D anchor) {
}

void UBtlGuiDrawObjectCore::SetAlpha(float Alpha) {
}

FVector2D UBtlGuiDrawObjectCore::GetScaleAnchorPos() {
    return FVector2D{};
}

FVector2D UBtlGuiDrawObjectCore::GetScale() {
    return FVector2D{};
}

FVector2D UBtlGuiDrawObjectCore::GetPos() {
    return FVector2D{};
}

FColor UBtlGuiDrawObjectCore::GetColor() {
    return FColor{};
}

FVector2D UBtlGuiDrawObjectCore::GetAngleAnchorPos() {
    return FVector2D{};
}

float UBtlGuiDrawObjectCore::GetAngle() {
    return 0.0f;
}

float UBtlGuiDrawObjectCore::GetAlpha() {
    return 0.0f;
}

UBtlGuiDrawObjectCore::UBtlGuiDrawObjectCore() {
    this->Visible = true;
    this->grpNo = 0;
}

