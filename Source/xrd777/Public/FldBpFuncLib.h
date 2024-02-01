#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ECldTimeZone.h"
#include "EFldBpRetBool.h"
#include "EFldBpRetFlag.h"
#include "EFldLoadPersistentType.h"
#include "FldBpFuncLib.generated.h"

class AActor;
class UDataTable;
class UObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class XRD777_API UFldBpFuncLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFldBpFuncLib();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SyncFade(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartFadeOUT(int32 Type, int32 Frame, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartFadeIN(int32 Type, int32 Frame, const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static void SetSkelMeshCompUpdateAnimationInEditor(USkeletalMeshComponent* Component, const bool NewUpdateState);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalFlag(FName FlagName, bool OnOff);
    
    UFUNCTION(BlueprintCallable)
    static void SetLocalCounter(FName CntName, int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestUnloadSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestLoadSubLevelOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HideSubLevellOrigin(const UObject* WorldContextObject, const FString& LevelAssetPath);
    
    UFUNCTION(BlueprintCallable)
    static EFldLoadPersistentType GetPersistentType(int32 FieldMajorID, int32 FieldMinorID);
    
    UFUNCTION(BlueprintCallable)
    static void GetLocalFlag(FName FlagName, EFldBpRetFlag& RetFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetLocalCounter(FName CntName);
    
    UFUNCTION(BlueprintCallable)
    static void FldSoundManagerSetAisacValue_FRONT_VELVETROOM(float ControlValue);
    
    UFUNCTION(BlueprintCallable)
    static void FldSetDisableNpcActor(int32 NpcMajorID, int32 NpcMinorID, bool ToHide);
    
    UFUNCTION(BlueprintCallable)
    static void FldLibUpdateNpcLayoutTable(UDataTable* SubLevelTable, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void FldLibUpdateCmmNpcLayoutTable(UDataTable* SubLevelTable, UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AActor* FldGetPlayerActor();
    
    UFUNCTION(BlueprintCallable)
    static void FldDispCriAtomExDebugResourcesInfo();
    
    UFUNCTION(BlueprintCallable)
    static void FldCommitViewports();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CheckRegistedSubLevel(const UObject* WorldContextObject, const FString& LevelName, EFldBpRetBool& Result);
    
    UFUNCTION(BlueprintCallable)
    static void CheckLoadedCommonDataSyncBlock();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void CheckLoadedCommonData(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void CallFieldLevel(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, int32 StartID);
    
    UFUNCTION(BlueprintCallable)
    static void CallFieldKeyFreeEventLevel(int32 FieldMajorID, int32 FieldMinorID, int32 TotalDay, ECldTimeZone TimeZone, int32 eventId, int32 PlayerStartID);
    
};

