#pragma once
#include "CoreMinimal.h"
#include "BustupCloth.h"
#include "BustupFace.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupFace {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBustupCloth> Faces;
    
    FBustupFace();
};

