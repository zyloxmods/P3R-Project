#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/LatentActionManager.h"
#include "AtlEvtAssetOverrideParameter.h"
#include "AtlEvtPlayLoadSublevelInfo.h"
#include "AtlEvtPlayParameter.h"
#include "AtlEvtPlayingCharacterInfo.h"
#include "AtlEvtPreData.h"
#include "AtlEvtSoundSEInfo.h"
#include "AtlEvtVisibleEventInfo.h"
#include "EAppCharCategoryType.h"
#include "EAtlEvtEventCategoryType.h"
#include "EAtlEvtPlayMode.h"
#include "EAtlEvtSublevelType.h"
#include "EEvtConditionalBranchCompType.h"
#include "EvtLocalData.h"
#include "FinishedEvtSeqencerDelegateDelegate.h"
#include "ForceFinishedEvtSeqencerDelegateDelegate.h"
#include "PlayEvtSeqencerDelegateDelegate.h"
#include "PlayEvtSeqencerHighSpeedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "AtlEvtSubsystem.generated.h"

class AActor;
class AAtlEvtLightScenarioTransitionController;
class AAtlEvtOnePicture;
class AAtlEvtPlayObject;
class ACharacter;
class UAssetLoader;
class UAtlEvtPreDataAsset;
class UObject;
class UWorld;

UCLASS(Blueprintable)
class XRD777_API UAtlEvtSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FAtlEvtPlayingCharacterInfo> AppEvtCharactersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FAtlEvtPlayingCharacterInfo> AppEvtLipUniqueIDCharactersMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtSoundSEInfo> EventSEInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlEvtLightScenarioTransitionController* LightScenarioTransitionController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvtLocalData EvtLocalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLSAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LevelSequenceObject;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayEvtSeqencerDelegate OnPlaySequencerDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFinishedEvtSeqencerDelegate OnFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FForceFinishedEvtSeqencerDelegate OnForceFinishedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayEvtSeqencerHighSpeedDelegate OnEvtHighSpeedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAtlEvtPreDataAsset* EvtPreDataAsset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FAtlEvtPreData> EvtPreDataMap;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> EventSublevelWorldObjPtr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtPlayLoadSublevelInfo> LoadedEventSublevelInfos;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurrentLoadedEventSublevels;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAtlEvtAssetOverrideParameter> ReserveAssetOverrideParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* AssetOverrideLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACharacter> AssetOverrideSubClass;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* BagActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAtlEvtOnePicture* OnePicture;
    
public:
    UAtlEvtSubsystem();
    UFUNCTION(BlueprintCallable)
    void TransitionLightScenarioSublevel(int32 NextLightScenarioIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetShowCinemaScope(bool bShow);
    
    UFUNCTION(BlueprintCallable)
    static void SetOT(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalData(int32 Index, int32 Data);
    
    UFUNCTION(BlueprintCallable)
    void SetEventPlayMode(EAtlEvtPlayMode InPlayMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetLocalData();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnActorSpawnedEventSublevel(AActor* SpawnedActor);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FString> MakeFieldSublevelPathListField(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FString> MakeFieldSublevelPathListEvent(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FString> MakeFieldSublevelPathListCmmu(const UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    TArray<FString> MakeFieldSublevelPathList(const UObject* WorldContextObject, EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShowCinemaScope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEventOrEditHelperMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFinishedPreloadLightScenarioSublevels() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEventPlayModeEditHelper() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDoingTransitionLightScenarioSublevel() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsConditionalBranchFromLocalData(EEvtConditionalBranchCompType CompType, int32 LHS, int32 Index);
    
private:
    UFUNCTION(BlueprintCallable)
    void InitScriptFinishFunction(int32 ExitType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    FAtlEvtVisibleEventInfo GetPlayingVisibleEventInfo(const UObject* WorldContextObject) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLocalData(int32 Index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FAtlEvtPlayLoadSublevelInfo> GetLoadedEventSublevelInfos() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFirstAppEventCharacterByLipUniqueID(int32 LipUniqueID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFirstAppEventCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const;
    
private:
    UFUNCTION()
    uint32 GetEvtPreDataHash(EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAtlEvtPreData GetEvtPreData(EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID) const;
    
    UFUNCTION(BlueprintCallable)
    EAtlEvtPlayMode GetEventPlayMode() const;
    
    UFUNCTION()
    uint32 GetAppEvtCharactersHash(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FAtlEvtPlayingCharacterInfo GetAppEventCharacter(EAppCharCategoryType CharcterCategoryType, int32 CharaIndexID) const;
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void EvtPlay(const UObject* WorldContextObject, const FString& EvtName, const FString& InEventRank, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable)
    void DateOffDelegate(int32 idx);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CallEventField(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CallEventCmmu(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    AAtlEvtPlayObject* CallEvent_SpawnLoadSublevelActor(UWorld* World, FName& StreamTargetLevelName, const FAtlEvtPlayParameter& Param, FAtlEvtPreData& PreData, EAtlEvtSublevelType SublevelType, FLatentActionInfo& LatentInfo, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    bool CallEvent_IsCompleteFieldLoadingSublevel() const;
    
    UFUNCTION(BlueprintCallable)
    void CallEvent_InternalFinishedEvent(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void CallEvent_DecrementFieldLoadingCount();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CallEvent(UObject* WorldContextObject, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
protected:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void CallCategoryEvent(UObject* WorldContextObject, EAtlEvtEventCategoryType CategoryType, int32 EventMajorID, int32 EventMinorID, const FAtlEvtPlayParameter& Param);
    
};

