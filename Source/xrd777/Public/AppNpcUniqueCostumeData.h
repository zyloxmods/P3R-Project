#pragma once
#include "CoreMinimal.h"
#include "AppNpcCostumePartsData.h"
#include "EAnimPackID.h"
#include "AppNpcUniqueCostumeData.generated.h"

class UAppCharAnimDataAsset;

USTRUCT(BlueprintType)
struct FAppNpcUniqueCostumeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EAnimPackID, TSoftObjectPtr<UAppCharAnimDataAsset>> Anims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Costume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAppNpcCostumePartsData Face;
    
    XRD777_API FAppNpcUniqueCostumeData();
};

