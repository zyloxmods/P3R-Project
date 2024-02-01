#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "UIDataAsset.generated.h"

class UObject;

UCLASS(Blueprintable)
class XRD777_API UUIDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> Assets;
    
    UUIDataAsset();
};

