#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "UICmpCalendarDrawEditParameterItem.generated.h"

USTRUCT(BlueprintType)
struct FUICmpCalendarDrawEditParameterItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Comment;
    
    XRD777_API FUICmpCalendarDrawEditParameterItem();
};

