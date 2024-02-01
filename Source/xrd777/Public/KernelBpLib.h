#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "Templates/SubclassOf.h"
#include "KernelBpLib.generated.h"

class ACharacter;
class UBfAsset;
class UBmdAsset;
class UObject;

UCLASS(Blueprintable)
class XRD777_API UKernelBpLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UKernelBpLib();
    UFUNCTION(BlueprintCallable)
    static void StopLoadingScreen();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartLoadingScreen(const UObject* WorldContextObject, bool bPlayUntilStopped, float PlayTime);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartBfPath(const UObject* WorldContextObject, const FString& BfAssetPath, const FString& BmdAssetPath, int32 ProcNo, FLatentActionInfo LatentInfo, int32& Result);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartBfEx(const UObject* WorldContextObject, TSoftObjectPtr<UBfAsset> InBfAsset, TSoftObjectPtr<UBmdAsset> InBmdAsset, int32 ProcNo, bool PlayerStop, bool BmdSearchOff, FLatentActionInfo LatentInfo, int32& Result);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartBf(const UObject* WorldContextObject, TSoftObjectPtr<UBfAsset> InAsset, int32 ProcNo, bool PlayerStop, bool BmdSearchOff, FLatentActionInfo LatentInfo, int32& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTestMap(const UObject* WorldContextObject, FTransform Location);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetTestCharacter(const UObject* WorldContextObject, TSubclassOf<ACharacter> In, FTransform Location);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsInEditor();
    
};

