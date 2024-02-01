#include "KernelBpLib.h"
#include "Templates/SubclassOf.h"

void UKernelBpLib::StopLoadingScreen() {
}

void UKernelBpLib::StartLoadingScreen(const UObject* WorldContextObject, bool bPlayUntilStopped, float PlayTime) {
}

void UKernelBpLib::StartBfPath(const UObject* WorldContextObject, const FString& BfAssetPath, const FString& BmdAssetPath, int32 ProcNo, FLatentActionInfo LatentInfo, int32& Result) {
}

void UKernelBpLib::StartBfEx(const UObject* WorldContextObject, TSoftObjectPtr<UBfAsset> InBfAsset, TSoftObjectPtr<UBmdAsset> InBmdAsset, int32 ProcNo, bool PlayerStop, bool BmdSearchOff, FLatentActionInfo LatentInfo, int32& Result) {
}

void UKernelBpLib::StartBf(const UObject* WorldContextObject, TSoftObjectPtr<UBfAsset> InAsset, int32 ProcNo, bool PlayerStop, bool BmdSearchOff, FLatentActionInfo LatentInfo, int32& Result) {
}

void UKernelBpLib::SetTestMap(const UObject* WorldContextObject, FTransform Location) {
}

void UKernelBpLib::SetTestCharacter(const UObject* WorldContextObject, TSubclassOf<ACharacter> In, FTransform Location) {
}

bool UKernelBpLib::IsInEditor() {
    return false;
}

UKernelBpLib::UKernelBpLib() {
}

