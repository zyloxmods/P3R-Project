#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "BtlEncountParam.h"
#include "Templates/SubclassOf.h"
#include "BtlManager.generated.h"

class ABtlControlBase;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ABtlManager : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABtlControlBase* Control;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlControlBase> ControlAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlEncountParam Param;
    
public:
    ABtlManager();
};

