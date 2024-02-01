#include "GlobalWork.h"
#include "Templates/SubclassOf.h"

AActor* UGlobalWork::SpawnActorFromClassSubLevelIndex(TSubclassOf<AActor> ActorClass, ESubLevelIndex SubLevelIndex, FTransform Transform) {
    return NULL;
}

void UGlobalWork::SetSubLevelActor(ESubLevelIndex SubLevelNum, AActor* Actor) {
}

void UGlobalWork::SetSequenceParam_KEY_FREE_EVENT(EGWorkSeqType Type, int32 major, int32 Minor, int32 mKfEvent) {
}

void UGlobalWork::SetSequenceParam_DEBUG(EGWorkSeqType Type, int32 major, int32 Minor, int32 mKfEvent, const FString& Tag) {
}

void UGlobalWork::SetSequenceParam(EGWorkSeqType Type, int32 major, int32 Minor) {
}

AActor* UGlobalWork::GetSubLevelActor(ESubLevelIndex SubLevelNum) {
    return NULL;
}

void UGlobalWork::GetSequenceParam_DEBUG(EGWorkSeqType& Type, int32& major, int32& Minor, int32& mKfEvent, FString& Tag) const {
}

void UGlobalWork::GetSequenceParam(EGWorkSeqType& Type, int32& major, int32& Minor, int32& mKfEvent) const {
}

void UGlobalWork::ClearSubLevelActor(ESubLevelIndex SubLevelNum) {
}

UGlobalWork::UGlobalWork() {
    this->mSequenceInstance_ = NULL;
    this->mCalendarInstance_ = NULL;
    this->mCldCommonData_ = NULL;
    this->mFileNameData_ = NULL;
    this->mFldCommonData_ = NULL;
    this->mItemData_ = NULL;
    this->mTrophy_ = NULL;
    this->mLeaderBoard_ = NULL;
    this->mSignedInDialog_ = NULL;
    this->mErrorDialog_ = NULL;
    this->mMessageDialog_ = NULL;
    this->pBustupController = NULL;
    this->pCommunityWork = NULL;
    this->pMsgWork = NULL;
    this->pEvtDataLoad = NULL;
    this->pFrameBufferCapture = NULL;
    this->pPadRumble = NULL;
    this->mFldCharParamTable_ = NULL;
    this->mFootstepsTable_ = NULL;
    this->mCharacterPoolManager_ = NULL;
    this->mSystemTextTable = NULL;
    this->mUIUseTextTable = NULL;
    this->mUICalendarTextTable = NULL;
    this->mSaveManager_ = NULL;
    this->mAddContent_ = NULL;
    this->pLoadingInst = NULL;
    this->mCmpMainActor_ = NULL;
    this->mBtlGuiResourcesActor_ = NULL;
    this->mBtlEncountWipeLoader_ = NULL;
    this->mBtlEncountWipeCore_ = NULL;
    this->mLevelPoolManager_ = NULL;
    this->mPoolSetting_ = false;
    this->bTempSaveHeaderUsed_ = false;
    this->mGameDataProc_ = NULL;
    this->mSystemMonitor_ = NULL;
}

