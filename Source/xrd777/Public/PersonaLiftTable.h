#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PersonaLiftTable.generated.h"

USTRUCT(BlueprintType)
struct FPersonaLiftTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OrFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AndFlag;
    
    XRD777_API FPersonaLiftTable();
};

