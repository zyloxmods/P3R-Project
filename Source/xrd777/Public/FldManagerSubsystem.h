#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/LatentActionManager.h"
#include "ECldTimeZone.h"
#include "EFldCmnProps.h"
#include "EFldLoadPattern.h"
#include "FldManagerSubsystemOnEventDispatherDelegate.h"
#include "Templates/SubclassOf.h"
#include "FldManagerSubsystem.generated.h"

class AActor;
class AAppActor;
class AAppPropsCore;
class ACharacterBaseCore;
class AFldAutoRecoverMenuScript;
class AFldCamera;
class AFldCameraBase;
class AFldDailyMenuScript;
class AFldDungeonMenuScript;
class AFldFieldEventActor;
class AFldHitCore;
class AFldInitScriptManager;
class AFldKeyFreeAnnounceActor;
class AFldKeyFreeEventActor;
class AFldLevelManager;
class AFldMiscCameraMove;
class AFldMiscCameraShake;
class AFldMiscCharBaseReload;
class AFldMiscCharaBaseMove;
class AFldOperator;
class AUIBackLog;
class AUISaveLoad;
class UAppCharacterComp;
class UFldMiniMapManager;
class UFldSoundManager;
class UObject;

UCLASS(Blueprintable)
class XRD777_API UFldManagerSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldManagerSubsystemOnEventDispather mOnEventCallField_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldLevelManager* mLevelManager_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAppCharacterComp* mPlayerComp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform mPlayerTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldOperator* mOparetator_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldInitScriptManager* mInitScrManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldKeyFreeAnnounceActor* mKeyFreeAnnounceActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldKeyFreeEventActor* mKeyFreeEventActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldFieldEventActor* mFieldEventActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* mLargeMapActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldSoundManager* mSoundManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldMiniMapManager* mMiniMapManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDungeonMenuScript* mDungeonMenuScript_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldDailyMenuScript* mDailyMenuScript_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUISaveLoad* mSaveMenu_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIBackLog* mBackLogDisp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* mVoiceActionDisp_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldHitCore* mKeyLockedActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldAutoRecoverMenuScript* mAutoRecoverMenuScript_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> mHiddenActorArray_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldMiscCharBaseReload* mCharBaseReload_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFldCmnProps, AAppPropsCore*> mCmnPropsActors_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldMiscCameraShake* mCameraShake_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mKeyHelpDelayTimer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mMoveFloorTimer_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterBaseCore> mDefaultPlayerClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterBaseCore> mDungeonPlayerClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFldCameraBase> mDefaultCameraClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFldCameraBase> mDungeonCameraClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFldCamera> mTransCameraClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterBaseCore> mFollowerClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacterBaseCore> mFollowerKoromaruClass_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mWorldContextObject_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFldMiscCharaBaseMove* mMoveActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool mCameraLock_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFldMiscCameraMove* mCameraMoveActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AFldHitCore*> mOverlapedHitArray_;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* mDebugMenu_;
    
public:
    UFldManagerSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetPlayerKeyEnable(bool KeyEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerEnable(bool Visible, bool KeyEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetParamDebug(int32 FieldMajorID, int32 FieldMinorID);
    
    UFUNCTION(BlueprintCallable)
    static void SetFieldCameraShakeActor(AFldMiscCameraShake* InActor);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void ProcLevelBluePrint(TSubclassOf<ACharacterBaseCore> DefaultPlayerClass, TSubclassOf<ACharacterBaseCore> DungeonPlayerClass, TSubclassOf<AFldCameraBase> DefaultCameraClass, TSubclassOf<AFldCameraBase> DungeonCameraClass, TSubclassOf<AFldCamera> TransCameraClass, TSubclassOf<ACharacterBaseCore> FollowerClass, TSubclassOf<ACharacterBaseCore> FollowerKoromaruClass, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void LoadFieldSubLevelDebug(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, EFldLoadPattern Pattern, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcFldEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsProcField();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadingField();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyFreeEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnablePartyChange();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AFldMiscCameraShake* GetFieldCameraShakeActor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckKeyFree();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void ChangeFieldSubLevelDebug(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, EFldLoadPattern Pattern, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
};

