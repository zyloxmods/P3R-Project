#pragma once
#include "CoreMinimal.h"
#include "DatPlayerLevelUpDataRecord.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerLevelUpDataRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Exp;
    
    XRD777_API FDatPlayerLevelUpDataRecord();
};

