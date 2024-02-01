#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "CharacterSimpleLipsAnimAppParam.h"
#include "EAppCharCategoryType.h"
#include "SoundApp.generated.h"

class UGameInstance;

UCLASS(Blueprintable)
class XRD777_API USoundApp : public UObject {
    GENERATED_BODY()
public:
    USoundApp();
    UFUNCTION(BlueprintCallable)
    static void StopSingleVoice(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void StopFacilityVoice(int32 CharaIndexID, bool UseAttenuator, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void StopEventVoiceWithLipSync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void StopEventVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void StopEventSE(int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void StopComSE(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void StopBGM_IMD();
    
    UFUNCTION(BlueprintCallable)
    static void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    static void StopBattleEventVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void StopBackLogVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void SetSystemPausePlayerAll(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetSelectorLabel(int32 PlayerMajorID, int32 PlayerMinorID, const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    static void SetPausePlayerAll(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetPausePlayer(int32 majorId, int32 minorId, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacByNameVOICE(float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacByNameSE(float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    static void SetAisacByNameBGM(float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSelectorLabel(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    static bool ReqReadFacilityVoiceData(const FString& Filename, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReqReadEventVoiceData(const FString& Filename, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReqReadBattleEventVoiceData(const FString& Filename, int32 BankNum, bool UseLipsync);
    
    UFUNCTION(BlueprintCallable)
    static bool ReqReadBackLogVoiceData(const FString& Filename, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseFacilityVoiceData(UGameInstance* GameInst, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseEventVoiceData(UGameInstance* GameInst, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseBattleEventVoiceData(UGameInstance* GameInst, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool ReleaseBackLogVoiceData(UGameInstance* GameInst, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayVoiceWithSimpleLipCustomParam(const FCharacterSimpleLipsAnimAppParam& SimpleLipsParam, int32 CueId, int32 SoundMajorID, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayVoiceWithLipsync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 CueId, int32 SoundMajorID, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlaySingleVoice(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayFacilityVoice(int32 CueId, int32 CharaIndexID, bool UseAttenuator, int32 BankNum, bool UseLips);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEventVoiceWithSimpleLipCustomParam(const FCharacterSimpleLipsAnimAppParam& SimpleLipsParam, int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEventVoiceWithLipsync(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEventVoice(int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayEventSE(int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayComSE(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBGM(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBattleEventVoiceWithLipsync(EAppCharCategoryType CategoryType, int32 CharaIndexID, int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBattleEventVoice(int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBattleBGM(int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static void PlayBackLogVoice(int32 CueId, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void PauseEventVoice(int32 BankNum, bool bPause);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSetupEndFacilityVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSetupEndEventVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSetupEndBattleEventVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSetupEndBackLogVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingSingleVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingFacilityVoice(bool UseAttenuator, int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingEventVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingComSE(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingBattleEventVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsPlayingBackLogVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveFacilityVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveEventVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveBattleEventVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActiveBackLogVoiceData(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void Init();
    
    UFUNCTION(BlueprintCallable)
    static float GetTime(int32 majorId, int32 minorId);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetNowPlayBGMQueID();
    
    UFUNCTION(BlueprintCallable)
    static FCriLipsMorphTargetBlendAmountAsJapanese getLipsyncLiveInfo(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static float GetLength(int32 majorId, int32 minorId, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static FString GetCurrentAppliedSnapshot();
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutComSE(int32 FadeOutFrame);
    
    UFUNCTION(BlueprintCallable)
    static void FadeOutCategoryBGM(int32 FadeOutFrame, float fadeOutVolume);
    
    UFUNCTION(BlueprintCallable)
    static void FadeoutBGM(int32 FadeOutFrame);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInCategoryBGM(int32 FadeInFrame, float fadeOutVolume);
    
    UFUNCTION(BlueprintCallable)
    static void FadeInBGM(int32 FadeOutFrame);
    
    UFUNCTION(BlueprintCallable)
    static void DetachDspBusSetting();
    
    UFUNCTION(BlueprintCallable)
    static bool CheckPauseEventVoice(int32 BankNum);
    
    UFUNCTION(BlueprintCallable)
    static void AttachDspBusSetting(const FString& SettingName);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyDspBusSnapshot(const FString& SnapshotName, int32 Millisecond);
    
};

