#pragma once
#include "CoreMinimal.h"
#include "PVectore.generated.h"

USTRUCT(BlueprintType)
struct FPVectore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float X;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Y;
    
    SLDASSETPLUGIN_API FPVectore();
};

