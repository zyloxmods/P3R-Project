#pragma once
#include "CoreMinimal.h"
#include "BustupEnvironment.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupEnvironment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> No;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> HeroNo;
    
    FBustupEnvironment();
};

