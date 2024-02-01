#include "MonitorBlueprintLibrary.h"

bool UMonitorBlueprintLibrary::NotEqual_MonitorHandleMonitorHandle(const FMonitorHandle& A, const FMonitorHandle& B) {
    return false;
}

bool UMonitorBlueprintLibrary::IsValid(const FMonitorHandle& MonitorHandle) {
    return false;
}

bool UMonitorBlueprintLibrary::IsSupportedFullscreen(const FMonitorHandle& MonitorHandle) {
    return false;
}

bool UMonitorBlueprintLibrary::GetSupportedFullscreenResolutionsUniqueOnly(const FMonitorHandle& MonitorHandle, TArray<FMonitorResolution>& OutResolutions) {
    return false;
}

bool UMonitorBlueprintLibrary::GetSupportedFullscreenResolutions(const FMonitorHandle& MonitorHandle, TArray<FMonitorResolution>& OutResolutions) {
    return false;
}

float UMonitorBlueprintLibrary::GetRefreshRate(const FMonitorResolution& Resolution) {
    return 0.0f;
}

FMonitorHandle UMonitorBlueprintLibrary::GetPrimaryMonitor() {
    return FMonitorHandle{};
}

void UMonitorBlueprintLibrary::GetMonitorSize(const FMonitorHandle& MonitorHandle, int32& Width, int32& Height) {
}

FIntPoint UMonitorBlueprintLibrary::GetMonitorPosition(const FMonitorHandle& MonitorHandle) {
    return FIntPoint{};
}

FString UMonitorBlueprintLibrary::GetMonitorName(const FMonitorHandle& MonitorHandle) {
    return TEXT("");
}

FMonitorHandle UMonitorBlueprintLibrary::GetCurrentMonitor() {
    return FMonitorHandle{};
}

FMonitorResolution UMonitorBlueprintLibrary::GetClosestEnclosingResolution(const FMonitorHandle& MonitorHandle, FIntPoint DesiredSize) {
    return FMonitorResolution{};
}

TArray<FMonitorHandle> UMonitorBlueprintLibrary::GetAvailableMonitors() {
    return TArray<FMonitorHandle>();
}

bool UMonitorBlueprintLibrary::EqualEqual_MonitorResolutionMonitorResolution(const FMonitorResolution& Left, const FMonitorResolution& Right) {
    return false;
}

bool UMonitorBlueprintLibrary::EqualEqual_MonitorHandleMonitorHandle(const FMonitorHandle& A, const FMonitorHandle& B) {
    return false;
}

void UMonitorBlueprintLibrary::ApplyMonitorSettings(const FMonitorResolution& Resolution, TEnumAsByte<EWindowMode::Type> ScreenMode, const FMonitorHandle& Monitor, bool bCheckForCommandLineOverrides, float Duration) {
}

UMonitorBlueprintLibrary::UMonitorBlueprintLibrary() {
}

