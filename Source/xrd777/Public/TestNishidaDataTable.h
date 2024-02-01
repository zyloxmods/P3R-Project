#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TestNishidaDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTestNishidaDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Level;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 attack;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Defence;
    
    XRD777_API FTestNishidaDataTable();
};

