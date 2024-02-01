#pragma once
#include "CoreMinimal.h"
#include "BustupParts.h"
#include "BustupCloth.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupCloth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBustupParts> Clothes;
    
    FBustupCloth();
};

