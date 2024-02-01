#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatSkillDataTable.generated.h"

USTRUCT(BlueprintType)
struct FDatSkillDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 attr;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 targetLv;
    
    XRD777_API FDatSkillDataTable();
};

