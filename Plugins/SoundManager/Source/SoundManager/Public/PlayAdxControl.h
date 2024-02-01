#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "CriLipsMouthInfo.h"
#include "EPlayerType.h"
#include "PlayAdxControl.generated.h"

class UAcbFileControlBlock;
class UPlayerControlBlock;

UCLASS(Blueprintable)
class SOUNDMANAGER_API UPlayAdxControl : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerControlBlock* mPlayerControlBlock[256];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UAcbFileControlBlock* mAcbFileControlBlock[64];
    
public:
    UPlayAdxControl();
    UFUNCTION(BlueprintCallable)
    void stopSound_IMD(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    void stopSound(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    void setPlayerAcbBank(int32 PlayerMajorID, int32 PlayerMinorID, EPlayerType Type, int32 bankID);
    
    UFUNCTION(BlueprintCallable)
    void resetLoudness();
    
    UFUNCTION(BlueprintCallable)
    void requestSound(int32 PlayerMajorID, int32 PlayerMinorID, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    int32 requestLoadAcb(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    void requestFreeAcb(int32 bankID);
    
    UFUNCTION(BlueprintCallable)
    void releasePlayerBank(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    void pauseSound(int32 PlayerMajorID, int32 PlayerMinorID, bool flag);
    
    UFUNCTION(BlueprintCallable)
    bool IsLoop(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    float GetTime(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    float getShortLoudness();
    
    UFUNCTION(BlueprintCallable)
    static int32 getNumCuePlayingCountByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    float getMomentaryLoudness();
    
    UFUNCTION(BlueprintCallable)
    FCriLipsMorphTargetBlendAmountAsJapanese getLipsyncLiveJapanese(int32 majorNum, int32 minorNum);
    
    UFUNCTION(BlueprintCallable)
    FCriLipsMouthInfo getLipsyncLiveInfo(int32 majorNum, int32 minorNum);
    
    UFUNCTION(BlueprintCallable)
    int64 getLengthSoundBank(int32 bankID, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    int64 getLengthPlayerBank(int32 majorNum, int32 minorNum, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    float getIntegratedLoudness();
    
    UFUNCTION(BlueprintCallable)
    void fadeOutSndMng(int32 PlayerMajorID, int32 PlayerMinorID, int32 fadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    bool fadeOutBGMCategorySoundManager(int32 fadeOutTime, float fadeOutVolume);
    
    UFUNCTION(BlueprintCallable)
    void fadeInSndMng(int32 PlayerMajorID, int32 PlayerMinorID, int32 fadeInTime);
    
    UFUNCTION(BlueprintCallable)
    bool fadeInBGMCategorySoundmanager(int32 fadeInTime, float fadeInVolume);
    
    UFUNCTION(BlueprintCallable)
    bool detachLipsyncLive(int32 majorNum, int32 minorNum);
    
    UFUNCTION(BlueprintCallable)
    int32 createPlayerBank(int32 PlayerMajorID, int32 PlayerMinorID, bool isMulti);
    
    UFUNCTION(BlueprintCallable)
    bool checkReadEnd(int32 bankID);
    
    UFUNCTION(BlueprintCallable)
    int32 checkReadAcb(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    bool checkPlaying(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    bool checkPauseSound(int32 PlayerMajorID, int32 PlayerMinorID);
    
    UFUNCTION(BlueprintCallable)
    bool attachLipsyncLive(int32 majorNum, int32 minorNum);
    
};

