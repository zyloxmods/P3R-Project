#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CriLipsMorphTargetBlendAmountAsJapanese.h"
#include "CriLipsMouthInfo.h"
#include "LiveLipSync.generated.h"

class ULipsAtomAnalyzer;

UCLASS(Blueprintable)
class SOUNDMANAGER_API ULiveLipSync : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULipsAtomAnalyzer* LipsAnalyzer;
    
public:
    ULiveLipSync();
    UFUNCTION(BlueprintCallable)
    FCriLipsMorphTargetBlendAmountAsJapanese getLipsyncLiveJapanese();
    
    UFUNCTION(BlueprintCallable)
    FCriLipsMouthInfo getLipsyncLiveInfo();
    
    UFUNCTION(BlueprintCallable)
    bool detachSoundManager(int32 majNum, int32 minNum);
    
    UFUNCTION(BlueprintCallable)
    bool attachSoundManager(int32 majNum, int32 minNum);
    
};

