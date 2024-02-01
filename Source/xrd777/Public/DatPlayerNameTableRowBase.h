#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "DatPlayerNameTableRowBase.generated.h"

USTRUCT(BlueprintType)
struct FDatPlayerNameTableRowBase : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FDatPlayerNameTableRowBase();
};

