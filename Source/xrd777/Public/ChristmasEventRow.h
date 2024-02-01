#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChristmasEventRow.generated.h"

USTRUCT(BlueprintType)
struct FChristmasEventRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 major;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Minor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flag;
    
    XRD777_API FChristmasEventRow();
};

