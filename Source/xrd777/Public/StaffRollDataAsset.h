#pragma once
#include "CoreMinimal.h"
#include "AppDataAsset.h"
#include "StaffRollTableData.h"
#include "StaffRollDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UStaffRollDataAsset : public UAppDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStaffRollTableData> Data;
    
    UStaffRollDataAsset();
};

