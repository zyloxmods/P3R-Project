#pragma once
#include "CoreMinimal.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EAppCharCategoryType.h"
#include "LipsyncAppListener.h"
#include "LipsyncAppObserveDelegateDelegate.h"
#include "LipsyncAppObserverSubsystem.generated.h"

class ULipsyncAppObserverSpeakWatcher;

UCLASS(Blueprintable)
class XRD777_API ULipsyncAppObserverSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLipsyncAppObserveDelegate LipsyncAppObserveDelegate;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FLipsyncAppListener> SpeakCharacterMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULipsyncAppObserverSpeakWatcher* SpeakWatcher;
    
public:
    ULipsyncAppObserverSubsystem();
    UFUNCTION(BlueprintCallable)
    void StopAllSpeakCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, int32 SoundMajorID, int32 SoundMinorID, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    bool IsSpeakingCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID);
    
    UFUNCTION(BlueprintCallable)
    FCriLipsMorphTargetBlendAmountAsJapanese getLipsyncLiveInfo(int32 SoundMajorID, int32 SoundMinorID);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpeakCharacterFromSoundID(int32 SoundMajorID, int32 SoundMinorID);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID);
    
};

