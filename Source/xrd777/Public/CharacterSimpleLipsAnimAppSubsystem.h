#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CharacterSimpleLipsAnimAppDelegateDelegate.h"
#include "CharacterSimpleLipsAnimAppListener.h"
#include "CharacterSimpleLipsAnimAppParam.h"
#include "EAppCharCategoryType.h"
#include "CharacterSimpleLipsAnimAppSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class XRD777_API UCharacterSimpleLipsAnimAppSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterSimpleLipsAnimAppDelegate LipsAppDelegate;
    
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FCharacterSimpleLipsAnimAppListener> SpeakCharacterMap;
    
public:
    UCharacterSimpleLipsAnimAppSubsystem();
    UFUNCTION(BlueprintCallable)
    void StopAllSpeakCharacter();
    
    UFUNCTION(BlueprintCallable)
    void StartSpeakCharacterWithCustomParam(const FCharacterSimpleLipsAnimAppParam& SimpleLipsParam, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void StartSpeakCharacterPtr(AActor* ActorPtr, float RequestedSpeakTotalTime, int32 MajorPlayerID, int32 MinorPlayerID, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void StartSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID, float RequestedSpeakTotalTime, bool bOverride);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpeakCharacterPtr(AActor* ActorPtr);
    
    UFUNCTION(BlueprintCallable)
    void FinishSpeakCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID);
    
};

