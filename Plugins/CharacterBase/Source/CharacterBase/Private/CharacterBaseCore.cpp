#include "CharacterBaseCore.h"

void ACharacterBaseCore::ReCalculateBounds() {
}


FName ACharacterBaseCore::GetMontageSectionName(UAnimMontage* Montage, int32 Index) {
    return NAME_None;
}

float ACharacterBaseCore::GetLastRenderTimeOnScreen() {
    return 0.0f;
}

float ACharacterBaseCore::GetCompLastRenderTimeOnScreen(UPrimitiveComponent* MeshComp) {
    return 0.0f;
}

ACharacterBaseCore::ACharacterBaseCore() {
    this->_SkeletalMeshLoader = NULL;
    this->_AnimBpLoader = NULL;
    this->_RecalcBounds = true;
    this->_AutoLoading = true;
    this->_MeshPackAsset = NULL;
    this->_PreviewMeshNo = 0;
    this->_PreviewCostumeNo = 0;
    this->_PreviewHairNo = 0;
    this->_PreviewFaceNo = 0;
    this->_AnimPackAsset = NULL;
    this->_PreviewMeshAnimNo = 0;
    this->_PreviewCostumeAnimNo = 0;
    this->_PreviewHairAnimNo = 0;
}

