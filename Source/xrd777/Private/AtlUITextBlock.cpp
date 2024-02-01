#include "AtlUITextBlock.h"

void UAtlUITextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
}

void UAtlUITextBlock::SetText(FText InText) {
}

void UAtlUITextBlock::SetStrikeBrush(FSlateBrush InStrikeBrush) {
}

void UAtlUITextBlock::SetShadowOffset(FVector2D InShadowOffset) {
}

void UAtlUITextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
}

void UAtlUITextBlock::SetOpacity(float InOpacity) {
}

void UAtlUITextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
}

void UAtlUITextBlock::SetFont(FSlateFontInfo InFontInfo) {
}

void UAtlUITextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
}

void UAtlUITextBlock::SetAutoWrapText(bool InAutoTextWrap) {
}

FText UAtlUITextBlock::GetText() const {
    return FText::GetEmpty();
}

UMaterialInstanceDynamic* UAtlUITextBlock::GetDynamicOutlineMaterial() {
    return NULL;
}

UMaterialInstanceDynamic* UAtlUITextBlock::GetDynamicFontMaterial() {
    return NULL;
}

UAtlUITextBlock::UAtlUITextBlock() {
    this->fontStyle = EAtlUIFontStyle::UI_FONT_STYLE_NORMAL_SMALL;
    this->TextScale = 1.00f;
    this->FontAdjustmentListTable = NULL;
    this->MinDesiredWidth = 0.00f;
    this->bWrapWithInvalidationPanel = false;
    this->bAutoWrapText = false;
    this->TextTransformPolicy = ETextTransformPolicy::None;
}

