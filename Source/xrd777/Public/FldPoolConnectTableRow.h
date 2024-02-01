#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldPoolParts.h"
#include "FldPoolConnectTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldPoolConnectTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFldPoolParts> Access;
    
    XRD777_API FFldPoolConnectTableRow();
};

