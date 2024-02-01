#include "soundTestGameInstance.h"

UPlayAdxControl* UsoundTestGameInstance::GetPlayAdxControl() {
    return NULL;
}

UPakFileManagerControl* UsoundTestGameInstance::GetFileManagerControl() {
    return NULL;
}

UsoundTestGameInstance::UsoundTestGameInstance() {
    this->m_PlayAdxControl = NULL;
}

