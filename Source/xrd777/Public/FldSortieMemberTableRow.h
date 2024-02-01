#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldSortieMemberTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldSortieMemberTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Enables;
    
    XRD777_API FFldSortieMemberTableRow();
};

