#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GlobalGameDataInheritanceTableRow.generated.h"

USTRUCT(BlueprintType)
struct FGlobalGameDataInheritanceTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Parameter;
    
    XRD777_API FGlobalGameDataInheritanceTableRow();
};

