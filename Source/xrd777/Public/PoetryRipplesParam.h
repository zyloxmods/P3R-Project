#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PoetryRipplesParam.generated.h"

USTRUCT(BlueprintType)
struct FPoetryRipplesParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PosX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PosY;
    
    XRD777_API FPoetryRipplesParam();
};

