#pragma once
#include "CoreMinimal.h"
#include "BtlResultItemParam.generated.h"

USTRUCT(BlueprintType)
struct FBtlResultItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    XRD777_API FBtlResultItemParam();
};

