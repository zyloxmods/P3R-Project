#pragma once
#include "CoreMinimal.h"
#include "HolidayEventData.h"
#include "HolidayEventDataTable.generated.h"

USTRUCT(BlueprintType)
struct FHolidayEventDataTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHolidayEventData> Datas;
    
    XRD777_API FHolidayEventDataTable();
};

