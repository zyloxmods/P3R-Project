#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TownMapInfoNameTable.generated.h"

USTRUCT(BlueprintType)
struct FTownMapInfoNameTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TextLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    XRD777_API FTownMapInfoNameTable();
};

