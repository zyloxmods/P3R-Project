#pragma once
#include "CoreMinimal.h"
#include "HolidayEventData.generated.h"

USTRUCT(BlueprintType)
struct FHolidayEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 major;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Minor;
    
    XRD777_API FHolidayEventData();
};

