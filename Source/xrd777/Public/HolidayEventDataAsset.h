#pragma once
#include "CoreMinimal.h"
#include "AppMultiDataAsset.h"
#include "HolidayEventDataTable.h"
#include "HolidayEventDataAsset.generated.h"

UCLASS(Blueprintable)
class UHolidayEventDataAsset : public UAppMultiDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHolidayEventDataTable> Tables;
    
    UHolidayEventDataAsset();
};

