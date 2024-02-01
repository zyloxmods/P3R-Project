#pragma once
#include "CoreMinimal.h"
#include "FldPlayerCostumeData.generated.h"

USTRUCT(BlueprintType)
struct FFldPlayerCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CostumeType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 BagType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 ShoesID;
    
    XRD777_API FFldPlayerCostumeData();
};

