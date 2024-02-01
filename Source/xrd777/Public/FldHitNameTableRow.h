#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FldHitNameTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFldHitNameTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString flag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name2;
    
    XRD777_API FFldHitNameTableRow();
};

