#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ChristmasEventMailRow.generated.h"

USTRUCT(BlueprintType)
struct FChristmasEventMailRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 MailID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName flag;
    
    XRD777_API FChristmasEventMailRow();
};

