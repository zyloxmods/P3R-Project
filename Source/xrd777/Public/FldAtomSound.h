#pragma once
#include "CoreMinimal.h"
#include "FldLocalActor.h"
#include "FldAtomSound.generated.h"

class UAtomComponent;

UCLASS(Blueprintable)
class XRD777_API AFldAtomSound : public AFldLocalActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSeasonSpring_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSeasonSummer_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSeasonAutumn_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mSeasonWinter_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeNoon_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeAfternoon_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeNight_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mTimeShadow_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mOffInEvent_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOnFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mOffFlagName_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    AFldAtomSound();
    UFUNCTION(BlueprintCallable)
    void stopSound_IMD();
    
    UFUNCTION(BlueprintCallable)
    void stopSound();
    
    UFUNCTION(BlueprintCallable)
    void PlaySound();
    
    UFUNCTION(BlueprintCallable)
    void FadeOutSound(float FadeOutDuration);
    
    UFUNCTION(BlueprintCallable)
    void FadeInSound(float FadeInDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool CheckEnablePlay();
    
};

