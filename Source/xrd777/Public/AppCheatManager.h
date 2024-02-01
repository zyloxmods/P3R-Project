#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "AppCheatManager.generated.h"

UCLASS(Blueprintable)
class XRD777_API UAppCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UAppCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void AtlWindowPosSaveEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlUObjectLeakChecker(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSoundConfigInfo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSoundConfigDevice(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSetWorldTimeSec(float sec);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSetNextDayTime(int32 Month, int32 Day, int32 Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSetDayTime(int32 Month, int32 Day, int32 Time);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSetCameraTransform(float PosX, float PosY, float PosZ, float RotX, float RotY, float RotZ);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSaveDataConvert(const FString& Mode, const FString& SaveDataID, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlSaveDataAccessorMask(const FString& Mask);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlRushEffectRate(float Rate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlRayTraceEnable(int32 raytrace, int32 PlanarReflection);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlPlanarReflectionPercentage(int32 percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlLogWorldTimeSec();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigShadowQuality(int32 Quality);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigScreenMode(int32 ScreenMode, int32 displayNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigScreen(int32 ResX, int32 ResY, int32 ScreenMode, int32 displayNo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigPreset(int32 Preset);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigHardwareStat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigFPS(int32 maxFPS);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGraphicConfigBenchmark();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlGetDayTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlForceUnpause();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlForceFadeOUT();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlForceFadeIN();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlFieldPlayerPos(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlFieldPauseActorALL(bool bPaused);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlFieldChangeVisible();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlFieldCameraShakeStart(float InFrequency, float InPowerX, float InPowerY, float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlFieldCameraShakeEnd(float InTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlEventForceFinish();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlDrawPlayLog(bool bVisible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlDispLoadedStreamingLevels();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlDispCharacterPoolListToOutputLog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlDevPlayLogging(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallNextTime();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallEventFild(int32 EventMaojorID, int32 EventMinorID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallEventCmmu(int32 EventMaojorID, int32 EventMinorID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallEvent(int32 EventMajorID, int32 EventMinorID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallDebugStartMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlCallAlphaDebugMenu();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBtlFadeManagerOldProcessEnable(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBtlCountdownStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBtlCountdownSetTime(int32 InSecond);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBtlCountdownPlay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBgmStop();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlBgmRestart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecSkillMutationTest(int32 SkillPackIndex, int32 MaxTryCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecSkillMutationPowerUpUnitTest(int32 OldSkillID, int32 NewSkillID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecSkillMutationPowerUpTest(int32 StartIndex, int32 MaxTryCount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecShuffleTimeTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecEnemyDropItemLoggingTest(int32 MinEncountID, int32 MaxEncountID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecEnemyAILoggingTest(int32 MinEncountID, int32 MaxEncountID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecDungeonTBoxTest(int32 BeginFloor, int32 EndFloor, bool bLoop);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlayExecDungeonPassingTest(int32 BeginFloor, int32 EndFloor, bool bLoop, bool bRebuild);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AtlAutoPlay(const FString& OPTION);
    
};

