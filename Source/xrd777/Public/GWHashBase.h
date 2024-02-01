#pragma once
#include "CoreMinimal.h"
#include "GWHashBase.generated.h"

USTRUCT(BlueprintType)
struct FGWHashBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 hash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    XRD777_API FGWHashBase();
};

