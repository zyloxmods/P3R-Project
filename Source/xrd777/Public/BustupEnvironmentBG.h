#pragma once
#include "CoreMinimal.h"
#include "BustupEnvironment.h"
#include "BustupEnvironmentBG.generated.h"

USTRUCT(BlueprintType)
struct XRD777_API FBustupEnvironmentBG {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FBustupEnvironment> Bg;
    
    FBustupEnvironmentBG();
};

