#include "SoundMonitoring.h"

int32 ASoundMonitoring::startReadAcb(const FString& Filename) {
    return 0;
}

int32 ASoundMonitoring::startFreePlayer(int32 PlayerId) {
    return 0;
}

int32 ASoundMonitoring::startFreeAcb(int32 bankID) {
    return 0;
}

void ASoundMonitoring::setReadBankToPlayer(int32 PlayerId, int32 readBank) {
}

int32 ASoundMonitoring::playCueID(int32 PlayerId, int32 CueId) {
    return 0;
}

bool ASoundMonitoring::fadeOutBGMCategorySoundMonitor(int32 fadeOutTime, float fadeOutVolume) {
    return false;
}

bool ASoundMonitoring::fadeInBGMCategorySoundMonitor(int32 fadeInTime, float fadeInVolume) {
    return false;
}

bool ASoundMonitoring::createPlayer(int32 PlayerId, EsoundPlayerType Type) {
    return false;
}

bool ASoundMonitoring::checkReadySoundMonitor() {
    return false;
}

bool ASoundMonitoring::checkReadyPlayer(int32 PlayerId) {
    return false;
}

bool ASoundMonitoring::checkReadBank(int32 readBank) {
    return false;
}

ASoundMonitoring::ASoundMonitoring() {
}

