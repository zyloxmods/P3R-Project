#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CampModelController.generated.h"

class UAssetLoader;
class UCampModelControllerItem;

UCLASS(Blueprintable)
class XRD777_API UCampModelController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCampModelControllerItem*> Items;
    
public:
    UCampModelController();
};

