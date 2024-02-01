#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "HolidayScheduleData.h"
#include "HolidayScheduleDataAsset.generated.h"

UCLASS(Blueprintable)
class UHolidayScheduleDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHolidayScheduleData> Table;
    
    UHolidayScheduleDataAsset();
};

