#include "BtlAnalyzeAffinityIcon.h"

FBtlAnalyzeAffinityIcon::FBtlAnalyzeAffinityIcon() {
    this->Icon = NULL;
    this->BGRect = NULL;
    this->WeakIn = NULL;
    this->WeakOut = NULL;
    this->WeakInDupli = NULL;
    this->WeakOutDupli = NULL;
    this->AlphaWeakDupli = 0.00f;
    this->ScaleWeakDupli = 0.00f;
    this->TimeWeakDupli = 0.00f;
    this->isPlayingInAnime = false;
    this->ResistIcon = NULL;
    this->ResistText = NULL;
    this->ResistTextBlur = NULL;
    this->ScanUnknownIcon = NULL;
    this->ScanUnknownIconBlur = NULL;
    this->ScanResistIcon = NULL;
    this->ScanResistIconBlur = NULL;
    this->RippleEffectLarge = NULL;
    this->RippleEffectSmall = NULL;
    this->KnownEffect = NULL;
    this->SmallScanUnknownIconBlur = NULL;
    this->TimeScan1 = 0.00f;
    this->AlphaUnknownIcon = 0.00f;
    this->TimeScan2 = 0.00f;
    this->AlphaResistIcon = 0.00f;
    this->AlphaRippleEffec = 0.00f;
    this->SizeRippleEffect = 0.00f;
    this->AlphaKnownEffect = 0.00f;
    this->isHighAnalyzeAnime = false;
    this->isShowNewAttr = false;
    this->RationDetailMove = 0.00f;
    this->IsWeakKnownIcon = false;
}

