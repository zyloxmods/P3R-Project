#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "NotRankUpEventRow.generated.h"

USTRUCT(BlueprintType)
struct FNotRankUpEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    XRD777_API FNotRankUpEventRow();
};

