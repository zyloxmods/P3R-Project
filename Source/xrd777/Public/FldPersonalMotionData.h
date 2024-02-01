#pragma once
#include "CoreMinimal.h"
#include "FldPmtCostumeDataCore.h"
#include "FldPersonalMotionData.generated.h"

USTRUCT(BlueprintType)
struct FFldPersonalMotionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPmtCostumeDataCore> DailyCostumes;
    
    XRD777_API FFldPersonalMotionData();
};

