#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "NormalSpreadItem.h"
#include "NormalSpreadDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UNormalSpreadDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNormalSpreadItem> Data;
    
    UNormalSpreadDataAsset();
};

