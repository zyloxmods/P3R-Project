#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EFldHitCharaHeroMotion.h"
#include "EFldHitCharaIconAttachedType.h"
#include "EFldHitCharaIconType.h"
#include "FldHitCharaIconParam.h"
#include "FldHitCharaModelParam.h"
#include "FldHitCore.h"
#include "Templates/SubclassOf.h"
#include "FldHitCharacter.generated.h"

class AActor;
class ACharacterBaseCore;
class ANpcBaseCore;
class UFldHitCharaIdleBehaviorComp;
class UFldHitCharaIdleTalkComp;
class UFldNpcComp;
class UShapeComponent;

UCLASS(Blueprintable)
class XRD777_API AFldHitCharacter : public AFldHitCore {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* CollisionComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldHitCharaModelParam> mCharaModelParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitCharaIconType mIconType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mIconPlural_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldHitCharaIconParam> mChangeIconParam_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitCharaIconAttachedType mIconAttachedType_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector mIconDirectLocationMODEL_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconDirectLocationMODEL_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mReadedFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mFloorIndex_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLookHeroOverlap_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSpeakMotionKeyPush_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mLookHeroKeyPush_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mFaceingHeroKeyPush_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFldHitCharaHeroMotion mHeroMotionKeyPush_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mReturnBaseRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterBaseCore> mCharaBaseClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANpcBaseCore> mNpcBaseClass_;
    
    UPROPERTY(EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int16, UFldNpcComp*> mCharaModelList_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mIconActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mMoveActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mHeroProcActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mDispName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bChangedRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator mBaseRotator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldHitCharaIdleTalkComp* mIdleTalkComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFldHitCharaIdleBehaviorComp* mIdleBehaviorComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsIdleBehaviorCreated_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGetAwayPrevAction_;
    
public:
    AFldHitCharacter();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCharaModelNum();
    
    UFUNCTION(BlueprintCallable)
    UFldNpcComp* GetCharaModelNpcComp(int32 ModelIndex);
    
    UFUNCTION(BlueprintCallable)
    void EndDelicate_SyncMotion();
    
    UFUNCTION(BlueprintCallable)
    void EndDelicate_RotationToPlayer();
    
    UFUNCTION(BlueprintCallable)
    void EndDelicate_ReturnBaseRotator();
    
    UFUNCTION(BlueprintCallable)
    void EndDelicate_ProcHeroPrevAction();
    
};

