#pragma once
#include "CoreMinimal.h"
#include "SimpleShopLineup.h"
#include "SimpleShopData.generated.h"

USTRUCT(BlueprintType)
struct FSimpleShopData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSimpleShopLineup> Data;
    
    XRD777_API FSimpleShopData();
};

