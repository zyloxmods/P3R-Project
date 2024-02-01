#include "AnimNotify_PlayEvtMultiMontage.h"

void UAnimNotify_PlayEvtMultiMontage::OnFinished(UAnimMontage* Montage, bool bInterapt) const {
}

UAnimNotify_PlayEvtMultiMontage::UAnimNotify_PlayEvtMultiMontage() {
    this->SlotNodeName = TEXT("DefaultSlot");
    this->AnimationType = EEvtCharaAnimationType::SimpleMontage;
    this->bStop = false;
}

