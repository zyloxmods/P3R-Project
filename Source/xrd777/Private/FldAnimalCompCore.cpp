#include "FldAnimalCompCore.h"
#include "Templates/SubclassOf.h"

AAppPropsCore* UFldAnimalCompCore::CreateAnimalActor(UWorld* InWorld, int32 InIndex, TSubclassOf<AAppPropsCore> InClassPtr, FTransform InTransform, AActor* InOwner) {
    return NULL;
}

UFldAnimalCompCore::UFldAnimalCompCore() {
    this->mIndex_ = 0;
    this->bIsEscape_ = false;
    this->bIsNotComeBack_ = false;
    this->mSceneOutTimeFix_ = 3.00f;
    this->mSceneOutTimeRnd_ = 3.00f;
    this->mEscapeRadius_ = 300.00f;
    this->mOwnerAnimal_ = NULL;
    this->mInitDisp_ = true;
    this->mEscapeHit_ = NULL;
}

