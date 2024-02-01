#pragma once
#include "CoreMinimal.h"
#include "DatShuffleArcanaNameRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleArcanaNameRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    XRD777_API FDatShuffleArcanaNameRecord();
};

