#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldDungeonTBoxItemDataTable.generated.h"

USTRUCT(BlueprintType)
struct FFldDungeonTBoxItemDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 itemNum;
    
    XRD777_API FFldDungeonTBoxItemDataTable();
};

