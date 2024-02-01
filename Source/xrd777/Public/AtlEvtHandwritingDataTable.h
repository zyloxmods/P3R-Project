#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EAppCharCategoryType.h"
#include "EAtlEvtHandwritingType.h"
#include "AtlEvtHandwritingDataTable.generated.h"

USTRUCT(BlueprintType)
struct FAtlEvtHandwritingDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAppCharCategoryType CharCategoryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CharaIndexID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAtlEvtHandwritingType HandwritingType;
    
    XRD777_API FAtlEvtHandwritingDataTable();
};

