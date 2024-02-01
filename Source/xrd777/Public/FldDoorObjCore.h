#pragma once
#include "CoreMinimal.h"
#include "EFldDoorOpenType.h"
#include "FldAnimObj.h"
#include "FldDoorAnimationData.h"
#include "FldDoorObjCore.generated.h"

class UAnimationAsset;
class UFldDoorPointComp;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AFldDoorObjCore : public AFldAnimObj {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWalkSpeed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mDoorCloseRange_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* mWaitAsset_CLOSE_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldDoorAnimationData mAnime_FRONT_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldDoorAnimationData mAnime_BACK_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldDoorPointComp* FrontPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldDoorPointComp* BackPoint;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    AFldDoorObjCore();
    UFUNCTION(BlueprintCallable)
    void PlayDoorOpenWithFade(EFldDoorOpenType OpenType, int32 FadeType, int32 FadeFrame, int32 FadePattern);
    
    UFUNCTION(BlueprintCallable)
    void PlayDoorOpen(EFldDoorOpenType OpenType);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingOpen();
    
    UFUNCTION(BlueprintCallable)
    void CallStateEndDelicate();
    
};

