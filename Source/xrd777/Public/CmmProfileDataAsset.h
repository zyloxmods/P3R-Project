#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CmmProfileItem.h"
#include "CmmProfileDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCmmProfileDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint16, FCmmProfileItem> Data;
    
public:
    UCmmProfileDataAsset();
};

