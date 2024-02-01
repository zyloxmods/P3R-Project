#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WordSortTable.generated.h"

USTRUCT(BlueprintType)
struct FWordSortTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PersonaID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    XRD777_API FWordSortTable();
};

