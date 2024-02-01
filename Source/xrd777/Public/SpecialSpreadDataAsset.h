#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "SpecialSpreadItem.h"
#include "SpecialSpreadDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API USpecialSpreadDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpecialSpreadItem> Data;
    
    USpecialSpreadDataAsset();
};

