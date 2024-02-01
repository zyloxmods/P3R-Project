#pragma once
#include "CoreMinimal.h"
#include "BtlDamageParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlDamageParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Damage;
    
    XRD777_API FBtlDamageParam();
};

