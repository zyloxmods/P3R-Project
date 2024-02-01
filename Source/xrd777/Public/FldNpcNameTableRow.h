#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldNpcNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldNpcNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name2;
    
    XRD777_API FFldNpcNameTableRow();
};

