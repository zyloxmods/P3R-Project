#include "AtomBusSampler.h"

void UAtomBusSampler::StopRecordedSound() {
}

void UAtomBusSampler::StartRecording(float InExpectedDuration, int32 InAsrRack, const FString& InBusName, bool BusOutput) {
}

void UAtomBusSampler::PlayRecordedSound() {
}

void UAtomBusSampler::PauseRecordedSound(bool bPause) {
}

bool UAtomBusSampler::IsRecording() const {
    return false;
}

bool UAtomBusSampler::IsPlayingRecordedSound() const {
    return false;
}

bool UAtomBusSampler::IsPausedRecordedSound() const {
    return false;
}

void UAtomBusSampler::FinishRecording() {
}

bool UAtomBusSampler::CanRecord() const {
    return false;
}

bool UAtomBusSampler::CanPlayRecordedSound() const {
    return false;
}

UAtomBusSampler::UAtomBusSampler() {
}

