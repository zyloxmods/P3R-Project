#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "WordSortTable.h"
#include "WordSortDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UWordSortDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWordSortTable> Data;
    
    UWordSortDataAsset();
};

