#pragma once
#include "CoreMinimal.h"
#include "DatShuffleMajorArcanaCard.generated.h"

USTRUCT(BlueprintType)
struct FDatShuffleMajorArcanaCard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Rank;
    
    XRD777_API FDatShuffleMajorArcanaCard();
};

