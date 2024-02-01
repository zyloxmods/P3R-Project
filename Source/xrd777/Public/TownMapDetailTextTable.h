#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TownMapDetailTextTable.generated.h"

USTRUCT(BlueprintType)
struct FTownMapDetailTextTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DetailText;
    
    XRD777_API FTownMapDetailTextTable();
};

