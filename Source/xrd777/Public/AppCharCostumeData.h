#pragma once
#include "CoreMinimal.h"
#include "AppCharCostumePartsData.h"
#include "AppCharCostumeData.generated.h"

USTRUCT(BlueprintType)
struct FAppCharCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharCostumePartsData Base;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharCostumePartsData Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharCostumePartsData Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppCharCostumePartsData Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BagKeyID;
    
    XRD777_API FAppCharCostumeData();
};

