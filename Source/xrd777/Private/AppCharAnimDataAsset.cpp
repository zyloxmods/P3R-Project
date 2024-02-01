#include "AppCharAnimDataAsset.h"

void UAppCharAnimDataAsset::Make() {
}

UAppCharAnimDataAsset::UAppCharAnimDataAsset() {
    this->PackId = EAnimPackID::None;
    this->Category = EAppCharCategoryType::None;
    this->CharId = 0;
    this->AnimInstance = NULL;
}

