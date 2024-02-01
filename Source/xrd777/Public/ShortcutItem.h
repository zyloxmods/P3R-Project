#pragma once
#include "CoreMinimal.h"
#include "FldShortcutData.h"
#include "ShortcutItem.generated.h"

USTRUCT(BlueprintType)
struct FShortcutItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldShortcutData Data;
    
    XRD777_API FShortcutItem();
};

