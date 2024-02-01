#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemNameList.generated.h"

USTRUCT(BlueprintType)
struct FItemNameList : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ItemName;
    
    XRD777_API FItemNameList();
};

