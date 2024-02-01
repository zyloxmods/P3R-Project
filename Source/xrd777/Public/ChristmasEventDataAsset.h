#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "ChristmasEventData.h"
#include "ChristmasEventDataAsset.generated.h"

UCLASS(Blueprintable)
class UChristmasEventDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChristmasEventData> Table;
    
    UChristmasEventDataAsset();
};

