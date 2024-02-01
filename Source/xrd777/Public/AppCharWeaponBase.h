#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "AppCharWeaponTableRow.h"
#include "AppCharWeaponBase.generated.h"

class UAnimSequenceBase;
class UAppCharWeaponAnimDataAsset;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API AAppCharWeaponBase : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharWeaponTableRow WeaponTbl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HideMaterialID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharWeaponAnimDataAsset* AnimPack;
    
public:
    AAppCharWeaponBase();
    UFUNCTION(BlueprintCallable)
    void PlayAnimSequence(UAnimSequenceBase* pSequence, bool Loop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnim(int32 animNo, bool Loop, float BlendInTime, float BlendOutTime, float InPlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWaitAnimNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Event_LoadEnd();
    
};

