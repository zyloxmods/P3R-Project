#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "EsoundPlayerType.h"
#include "SoundMonitoring.generated.h"

UCLASS(Blueprintable)
class XRD777_API ASoundMonitoring : public AAppActor {
    GENERATED_BODY()
public:
    ASoundMonitoring();
    UFUNCTION(BlueprintCallable)
    static int32 startReadAcb(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    static int32 startFreePlayer(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static int32 startFreeAcb(int32 bankID);
    
    UFUNCTION(BlueprintCallable)
    static void setReadBankToPlayer(int32 PlayerId, int32 readBank);
    
    UFUNCTION(BlueprintCallable)
    static int32 playCueID(int32 PlayerId, int32 CueId);
    
    UFUNCTION(BlueprintCallable)
    static bool fadeOutBGMCategorySoundMonitor(int32 fadeOutTime, float fadeOutVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool fadeInBGMCategorySoundMonitor(int32 fadeInTime, float fadeInVolume);
    
    UFUNCTION(BlueprintCallable)
    static bool createPlayer(int32 PlayerId, EsoundPlayerType Type);
    
    UFUNCTION(BlueprintCallable)
    static bool checkReadySoundMonitor();
    
    UFUNCTION(BlueprintCallable)
    static bool checkReadyPlayer(int32 PlayerId);
    
    UFUNCTION(BlueprintCallable)
    static bool checkReadBank(int32 readBank);
    
};

