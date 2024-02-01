#include "SoundAppFieldControlBlock.h"

FSoundAppFieldControlBlock::FSoundAppFieldControlBlock() {
    this->mIsSetup = false;
    this->mReadBank = 0;
    this->mPlayerType = EPlayerType::BGM;
    this->mPlayerNum = 0;
    this->mRestartFlags = 0;
}

