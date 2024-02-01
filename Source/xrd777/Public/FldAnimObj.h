#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FldAnimeObjAnimation.h"
#include "FldObjBase.h"
#include "FldAnimObj.generated.h"

class UNiagaraComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AFldAnimObj : public AFldObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldAnimeObjAnimation> mAnimeArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mNotPausedInLoop_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* mAnimeMesh_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* mNiagaraComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> mAnimeMeshList_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mAnimIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInit_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mLoopAnimIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIsHide_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mHideTransform_;
    
public:
    AFldAnimObj();
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(int32 AnimeID, bool LoopFlag);
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void InitializeArray(TArray<USkeletalMeshComponent*> SkeleTalMeshList, int32 AnimeID);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USkeletalMeshComponent* SkeletalMesh, int32 AnimeID);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNowAnimeID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetAnimationNum();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetting();
    
    UFUNCTION(BlueprintCallable)
    void ChangeAnimationDEBUG();
    
};

