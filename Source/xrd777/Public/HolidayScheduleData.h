#pragma once
#include "CoreMinimal.h"
#include "HolidayScheduleData.generated.h"

USTRUCT(BlueprintType)
struct FHolidayScheduleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Month;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Day;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArcanaID[3];
    
    XRD777_API FHolidayScheduleData();
};

