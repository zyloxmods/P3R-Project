#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AddContentsNameDispTable.generated.h"

USTRUCT(BlueprintType)
struct FAddContentsNameDispTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ItemId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Comment;
    
    XRD777_API FAddContentsNameDispTable();
};

