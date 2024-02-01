#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "AssetHolder.generated.h"

class UAssetHolder;

UCLASS(Blueprintable)
class XRD777_API UAssetHolder : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FLoadedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> HoldAssets;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLoadedDelegate LoadedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> loadedAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAssetHolder*> ChildHolders;
    
public:
    UAssetHolder();
    UFUNCTION(BlueprintCallable)
    void UnloadAsset();
    
private:
    UFUNCTION(BlueprintCallable)
    void LoadComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadAsset();
    
    UFUNCTION()
    UAssetHolder::FLoadedDelegate GetLoadedDelegate();
    
private:
    UFUNCTION(BlueprintCallable)
    void ChildLoadComplete(TArray<UObject*> NewLoadedAssets);
    
};

