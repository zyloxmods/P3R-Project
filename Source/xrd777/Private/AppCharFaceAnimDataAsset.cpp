#include "AppCharFaceAnimDataAsset.h"

void UAppCharFaceAnimDataAsset::Make() {
}

FString UAppCharFaceAnimDataAsset::GetAssetPath(EAppCharFaceAnimID FaceAnimID, EAppCharCategoryType CharCategory, int32 NewCharId, EAppCharAnimCategoryType AnimCategory) {
    return TEXT("");
}

void UAppCharFaceAnimDataAsset::AddExtra() {
}

UAppCharFaceAnimDataAsset::UAppCharFaceAnimDataAsset() {
    this->Category = EAppCharCategoryType::None;
    this->CharId = 0;
}

