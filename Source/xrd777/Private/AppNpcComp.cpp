#include "AppNpcComp.h"

void UAppNpcComp::SetFootForBP(int32 ID) {
}

void UAppNpcComp::SetCosTexID(int32 Index) {
}

ANpcBaseCore* UAppNpcComp::GetBaseCore() const {
    return NULL;
}

UAppNpcComp::UAppNpcComp() {
    this->mBaseCore_ = NULL;
    this->Loader = NULL;
}

