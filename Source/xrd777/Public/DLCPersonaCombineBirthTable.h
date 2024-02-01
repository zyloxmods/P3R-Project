#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DLCPersonaCombineBirthTable.generated.h"

USTRUCT(BlueprintType)
struct FDLCPersonaCombineBirthTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 flag;
    
    XRD777_API FDLCPersonaCombineBirthTable();
};

