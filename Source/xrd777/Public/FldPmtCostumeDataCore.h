#pragma once
#include "CoreMinimal.h"
#include "FldPmtCostumeDataCore.generated.h"

USTRUCT(BlueprintType)
struct FFldPmtCostumeDataCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CostumeIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Setting;
    
    XRD777_API FFldPmtCostumeDataCore();
};

