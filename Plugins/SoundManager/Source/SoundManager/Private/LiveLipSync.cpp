#include "LiveLipSync.h"

FCriLipsMorphTargetBlendAmountAsJapanese ULiveLipSync::getLipsyncLiveJapanese() {
    return FCriLipsMorphTargetBlendAmountAsJapanese{};
}

FCriLipsMouthInfo ULiveLipSync::getLipsyncLiveInfo() {
    return FCriLipsMouthInfo{};
}

bool ULiveLipSync::detachSoundManager(int32 majNum, int32 minNum) {
    return false;
}

bool ULiveLipSync::attachSoundManager(int32 majNum, int32 minNum) {
    return false;
}

ULiveLipSync::ULiveLipSync() {
    this->LipsAnalyzer = NULL;
}

