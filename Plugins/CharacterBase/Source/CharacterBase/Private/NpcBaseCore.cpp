#include "NpcBaseCore.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"

FName ANpcBaseCore::GetMontageSectionName(UAnimMontage* Montage, int32 Index) {
    return NAME_None;
}

USkeletalMeshComponent* ANpcBaseCore::GetMesh() const {
    return NULL;
}


ANpcBaseCore::ANpcBaseCore() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh0"));
    this->_SkeletalMeshLoader = NULL;
    this->_AnimBpLoader = NULL;
    this->_TextureLoader = NULL;
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
    this->CostumeTexture = NULL;
    this->HairTexture = NULL;
    this->FaceTexture = NULL;
    this->SkinColorID = 0;
    this->HeightScale = 1.00f;
}

