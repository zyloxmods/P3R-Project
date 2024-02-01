#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldPmtCostumeDataCore.h"
#include "FldPersonalMotionTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldPersonalMotionTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MotionID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IsBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPmtCostumeDataCore> DailyCostumes;
    
    XRD777_API FFldPersonalMotionTableRow();
};

