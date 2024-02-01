#pragma once
#include "CoreMinimal.h"
#include "NormalSpreadItem.generated.h"

USTRUCT(BlueprintType)
struct FNormalSpreadItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Races;
    
    XRD777_API FNormalSpreadItem();
};

