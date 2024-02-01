#pragma once
#include "CoreMinimal.h"
#include "BtlGuiResourcesBase.h"
#include "Templates/SubclassOf.h"
#include "BtlGuiResourcesLoadWatcher.generated.h"

class ABtlGuiResourcesActor;
class UAssetLoader;

UCLASS(Blueprintable)
class XRD777_API ABtlGuiResourcesLoadWatcher : public ABtlGuiResourcesBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABtlGuiResourcesActor> LoadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pLoader;
    
    ABtlGuiResourcesLoadWatcher();
    UFUNCTION(BlueprintCallable)
    void LoadStart();
    
};

