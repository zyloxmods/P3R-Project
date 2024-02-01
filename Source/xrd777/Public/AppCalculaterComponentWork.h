#pragma once
#include "CoreMinimal.h"
#include "AppCalculationItem.h"
#include "AppCalculaterComponentWork.generated.h"

USTRUCT(BlueprintType)
struct FAppCalculaterComponentWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAppCalculationItem> List;
    
    XRD777_API FAppCalculaterComponentWork();
};

