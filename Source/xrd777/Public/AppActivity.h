#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AppActivity.generated.h"

class UActivityDataAsset;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API UAppActivity : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivityDataAsset* DataAsset_;
    
public:
    UAppActivity();
};

