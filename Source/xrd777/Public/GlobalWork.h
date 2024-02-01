#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/GameInstance.h"
#include "EGWorkSeqType.h"
#include "ESubLevelIndex.h"
#include "SaveGameHeadder.h"
#include "Templates/SubclassOf.h"
#include "GlobalWork.generated.h"

class AActor;
class AAppActor;
class ABtlEncountWipeCore;
class ABtlGuiResourcesBase;
class ACmpMainActor;
class AFldLevelPoolManager;
class UAddContent;
class UAppCharFootstepsTable;
class UAppCharacterPoolManager;
class UBtlEncountWipeLoader;
class UBustupController;
class UCalendar;
class UCldCommonData;
class UCommunityWork;
class UDatItem;
class UDatSystemText;
class UDatUICalendarText;
class UDatUIUseText;
class UErrorDialog;
class UEvtDataLoad;
class UFileNameManager;
class UFldCharParamTable;
class UFldCommonData;
class UFrameBufferCapture;
class UGlobalGameData;
class ULeaderBoardManager;
class ULoading;
class UMessageDialog;
class UMsgWork;
class UPadRumble;
class USequence;
class USignedInDialog;
class UTrophyManager;
class UXrd777SaveManager;

UCLASS(Blueprintable, NonTransient)
class XRD777_API UGlobalWork : public UGameInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USequence* mSequenceInstance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCalendar* mCalendarInstance_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCldCommonData* mCldCommonData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFileNameManager* mFileNameData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldCommonData* mFldCommonData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatItem* mItemData_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTrophyManager* mTrophy_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULeaderBoardManager* mLeaderBoard_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USignedInDialog* mSignedInDialog_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UErrorDialog* mErrorDialog_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMessageDialog* mMessageDialog_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupController* pBustupController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommunityWork* pCommunityWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgWork* pMsgWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEvtDataLoad* pEvtDataLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFrameBufferCapture* pFrameBufferCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPadRumble* pPadRumble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFldCharParamTable* mFldCharParamTable_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharFootstepsTable* mFootstepsTable_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppCharacterPoolManager* mCharacterPoolManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatSystemText* mSystemTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatUIUseText* mUIUseTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDatUICalendarText* mUICalendarTextTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UXrd777SaveManager* mSaveManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAddContent* mAddContent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULoading* pLoadingInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* mCmpMainActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlGuiResourcesBase* mBtlGuiResourcesActor_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlEncountWipeLoader* mBtlEncountWipeLoader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlEncountWipeCore* mBtlEncountWipeCore_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFldLevelPoolManager* mLevelPoolManager_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mPoolSetting_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSaveGameHeadder mTempSaveHeader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTempSaveHeaderUsed_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGlobalGameData* mGameDataProc_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAppActor* mSystemMonitor_;
    
public:
    UGlobalWork();
    UFUNCTION(BlueprintCallable)
    static AActor* SpawnActorFromClassSubLevelIndex(TSubclassOf<AActor> ActorClass, ESubLevelIndex SubLevelIndex, FTransform Transform);
    
    UFUNCTION(BlueprintCallable)
    static void SetSubLevelActor(ESubLevelIndex SubLevelNum, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceParam_KEY_FREE_EVENT(EGWorkSeqType Type, int32 major, int32 Minor, int32 mKfEvent);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceParam_DEBUG(EGWorkSeqType Type, int32 major, int32 Minor, int32 mKfEvent, const FString& Tag);
    
    UFUNCTION(BlueprintCallable)
    void SetSequenceParam(EGWorkSeqType Type, int32 major, int32 Minor);
    
    UFUNCTION(BlueprintCallable)
    static AActor* GetSubLevelActor(ESubLevelIndex SubLevelNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSequenceParam_DEBUG(EGWorkSeqType& Type, int32& major, int32& Minor, int32& mKfEvent, FString& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSequenceParam(EGWorkSeqType& Type, int32& major, int32& Minor, int32& mKfEvent) const;
    
    UFUNCTION(BlueprintCallable)
    static void ClearSubLevelActor(ESubLevelIndex SubLevelNum);
    
};

