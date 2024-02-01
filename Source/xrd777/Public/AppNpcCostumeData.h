#pragma once
#include "CoreMinimal.h"
#include "AppNpcCostumePartsData.h"
#include "AppNpcCostumeData.generated.h"

USTRUCT(BlueprintType)
struct FAppNpcCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Face;
    
    XRD777_API FAppNpcCostumeData();
};

