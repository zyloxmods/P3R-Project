#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EEvtConditionalBranchCompType.h"
#include "AppPropsCore.generated.h"

class UAppPropsAnimPackAsset;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AAppPropsCore : public AAppActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOnFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOffFlagName_;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppPropsAnimPackAsset* mAnimePackAsset_;
    
public:
    AAppPropsCore();
    UFUNCTION(BlueprintCallable)
    void PlayAnimationPack(int32 AnimePackIndex, const bool IsLoop, const float BlendInTime, const float BlendOutTime, const float InPlayRate, FName AnimSlotName);
    
    UFUNCTION(BlueprintCallable)
    void CompareToHiddenCharacter(int32 LocalDataIndex, int32 ConditionalValue, EEvtConditionalBranchCompType CompareType);
    
};

