#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GWFlagType.generated.h"

USTRUCT(BlueprintType)
struct FGWFlagType : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FGWFlagType();
};

