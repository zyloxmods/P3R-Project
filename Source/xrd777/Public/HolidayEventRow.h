#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HolidayEventRow.generated.h"

USTRUCT(BlueprintType)
struct FHolidayEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minor;
    
    XRD777_API FHolidayEventRow();
};

