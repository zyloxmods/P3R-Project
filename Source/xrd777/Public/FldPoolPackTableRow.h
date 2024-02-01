#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldPoolParts.h"
#include "FldPoolPackTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldPoolPackTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPoolParts> PartsList;
    
    XRD777_API FFldPoolPackTableRow();
};

