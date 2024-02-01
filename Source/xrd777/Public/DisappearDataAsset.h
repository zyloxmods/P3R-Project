#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "DisappearItem.h"
#include "DisappearDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UDisappearDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint16, FDisappearItem> Data;
    
    UDisappearDataAsset();
};

