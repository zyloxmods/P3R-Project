#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "MonitorHandle.h"
#include "MonitorResolution.h"
#include "MonitorBlueprintLibrary.generated.h"

UCLASS(Blueprintable)
class MONITORSNAP_API UMonitorBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMonitorBlueprintLibrary();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool NotEqual_MonitorHandleMonitorHandle(const FMonitorHandle& A, const FMonitorHandle& B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsValid(const FMonitorHandle& MonitorHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSupportedFullscreen(const FMonitorHandle& MonitorHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSupportedFullscreenResolutionsUniqueOnly(const FMonitorHandle& MonitorHandle, TArray<FMonitorResolution>& OutResolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetSupportedFullscreenResolutions(const FMonitorHandle& MonitorHandle, TArray<FMonitorResolution>& OutResolutions);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetRefreshRate(const FMonitorResolution& Resolution);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMonitorHandle GetPrimaryMonitor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMonitorSize(const FMonitorHandle& MonitorHandle, int32& Width, int32& Height);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIntPoint GetMonitorPosition(const FMonitorHandle& MonitorHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetMonitorName(const FMonitorHandle& MonitorHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMonitorHandle GetCurrentMonitor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMonitorResolution GetClosestEnclosingResolution(const FMonitorHandle& MonitorHandle, FIntPoint DesiredSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FMonitorHandle> GetAvailableMonitors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_MonitorResolutionMonitorResolution(const FMonitorResolution& Left, const FMonitorResolution& Right);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool EqualEqual_MonitorHandleMonitorHandle(const FMonitorHandle& A, const FMonitorHandle& B);
    
    UFUNCTION(BlueprintCallable)
    static void ApplyMonitorSettings(const FMonitorResolution& Resolution, TEnumAsByte<EWindowMode::Type> ScreenMode, const FMonitorHandle& Monitor, bool bCheckForCommandLineOverrides, float Duration);
    
};

