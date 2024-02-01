#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldPlayerCostumeData.h"
#include "FldPlayerCostumeTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldPlayerCostumeTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerCostumeData Data_DAY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerCostumeData Data_AFTER;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerCostumeData Data_NIGHT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldPlayerCostumeData Data_NIGHT_H;
    
    XRD777_API FFldPlayerCostumeTableRow();
};

