#include "TitleUITableRow.h"

FTitleUITableRow::FTitleUITableRow() {
    this->LogoFadeInFrame = 0;
    this->LogoAtlusCrossFadeFrame = 0;
    this->LogoAtlusWaitFrame = 0;
    this->LogoMaskOutFrame = 0;
    this->LogoAtlusVisibleTime = 0.00f;
    this->LogoVisibleTime = 0.00f;
    this->CautionFadeInFrame = 0;
    this->CautionVisibleFrame = 0;
    this->CautionFadeOutFrame = 0;
    this->PressAnyButtonVisibleFrame = 0;
    this->PressAnyButtonWaitAnimFrame = 0;
    this->PressAnyButtonSpeedFrame = 0;
    this->CopyLightAndLogoVisibleWaitFrame = 0;
    this->CopyLightAndLogoSpeedFrame = 0;
    this->PressAnyUICloseFrame = 0;
    this->SelectListAnimWaitFrame = 0;
    this->TitleSelectListRootX = 0;
    this->TitleSelectListRootY = 0;
    this->PressWaitTimeout = 0.00f;
    this->SelectTimeout = 0.00f;
    this->LogoAtlusWidthM = 0.00f;
    this->LogoAtlusHeightM = 0.00f;
    this->Logo2ProWidthM = 0.00f;
    this->Logo2ProHeightM = 0.00f;
    this->LogoUe4WidthM = 0.00f;
    this->LogoUe4HeightM = 0.00f;
    this->LogoCloseAnimDEC = false;
    this->CautionSkipWaitTime = 0.00f;
    this->PleaseWaitFadeInWaitTime = 0.00f;
}

