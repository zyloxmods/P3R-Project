#include "FldLevelLoaderMonitorActor.h"

void AFldLevelLoaderMonitorActor::OnLoadLevelStreaming() {
}

AFldLevelLoaderMonitorActor::AFldLevelLoaderMonitorActor() {
    this->mUniqueId_ = 0;
    this->mType_ = EFldLevelLoaderType::Load;
    this->mProcTimer_ = 0.00f;
}

