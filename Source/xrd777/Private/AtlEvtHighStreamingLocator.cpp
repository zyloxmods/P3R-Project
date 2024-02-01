#include "AtlEvtHighStreamingLocator.h"

void AAtlEvtHighStreamingLocator::SetEnableHighStreaming(bool bEnable) {
}

AAtlEvtHighStreamingLocator::AAtlEvtHighStreamingLocator() {
    this->HighStreamingLocatorID = 0;
    this->BoostFactor = 1.00f;
    this->bOverrideLocation = false;
    this->Duration = 0.00f;
}

