#include "ModelTestComp.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "CollisionActor.h"

UModelTestComp::UModelTestComp() {
    this->mpDebugMenu = NULL;
    this->mCharClass = NULL;
    this->mpTestSpr = NULL;
    this->mpTestMaterial = NULL;
    this->mpTestMID = NULL;
    this->mpAnimController = NULL;
    this->mpTestSpawnCharacter = NULL;
    this->mpCamera = NULL;
    this->mpSceneCaptureComp = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("SceneCaptureComp"));
    this->mpCollisionActor = CreateDefaultSubobject<UCollisionActor>(TEXT("CameraCollsion"));
    this->mpAttachTestSphere = CreateDefaultSubobject<USphereComponent>(TEXT("AttachTestSphere"));
    this->mpMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SphereMeshComp"));
    this->mpLight = NULL;
    this->mpPostProcessVolume = NULL;
    this->mpCaptureDrawMat = NULL;
    this->mpDrawTestSpr = NULL;
    this->mTestComponent = NULL;
    this->InputActivate = true;
}

