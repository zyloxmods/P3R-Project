#pragma once
#include "CoreMinimal.h"
#include "EPartType.h"
#include "DungeonPartVariationData.generated.h"

USTRUCT(BlueprintType)
struct FDungeonPartVariationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> VariationNo;
    
    XRD777_API FDungeonPartVariationData();
};

