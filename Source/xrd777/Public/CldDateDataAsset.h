#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "CldDateTableItem.h"
#include "CldDateDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UCldDateDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCldDateTableItem> Data;
    
    UCldDateDataAsset();
};

