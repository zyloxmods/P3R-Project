#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FileNameManager.generated.h"

class AUFileNameManagerrActor;
class UAssetLoader;
class UDataAsset;

UCLASS(Blueprintable)
class XRD777_API UFileNameManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* TableFileName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUFileNameManagerrActor* mActor_;
    
public:
    UFileNameManager();
};

