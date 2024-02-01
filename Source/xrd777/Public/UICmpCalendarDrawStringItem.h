#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UICmpCalendarDrawStringItem.generated.h"

USTRUCT(BlueprintType)
struct FUICmpCalendarDrawStringItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName String;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Comment;
    
    XRD777_API FUICmpCalendarDrawStringItem();
};

