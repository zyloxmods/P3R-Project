#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "BustupAnimTable.generated.h"

USTRUCT(BlueprintType)
struct FBustupAnimTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Type;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Frame;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Random;
    
    XRD777_API FBustupAnimTable();
};

