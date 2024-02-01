#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RaytraceFieldData.h"
#include "RaytraceFieldDataTable.generated.h"

USTRUCT(BlueprintType)
struct FRaytraceFieldDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 majorId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRaytraceFieldData> fieldDatas;
    
    XRD777_API FRaytraceFieldDataTable();
};

