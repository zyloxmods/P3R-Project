#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EvitemItemListRecord.generated.h"

USTRUCT(BlueprintType)
struct FEvitemItemListRecord : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SortNum;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ItemType;
    
    XRD777_API FEvitemItemListRecord();
};

