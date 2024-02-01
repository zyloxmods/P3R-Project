#pragma once
#include "CoreMinimal.h"
#include "FldLaoAnimData.h"
#include "FldObjBase.h"
#include "FldLinkAnimObj.generated.h"

class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AFldLinkAnimObj : public AFldObjBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldLaoAnimData mAnime_WAIT_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldLaoAnimData mAnime_START_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldLaoAnimData> mAnimeArray_LOOP_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAnimeLoopFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldLaoAnimData mAnime_END_;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mFlag_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mLoopIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> mAnimeMeshList_;
    
public:
    AFldLinkAnimObj();
    UFUNCTION(BlueprintCallable)
    void InitializeArray(TArray<USkeletalMeshComponent*> SkeleTalMeshList);
    
    UFUNCTION(BlueprintCallable)
    void Initialize(USkeletalMeshComponent* SkeletalMesh);
    
};

