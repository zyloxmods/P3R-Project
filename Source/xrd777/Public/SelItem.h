#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SelItem.generated.h"

class UMsgProcWindow_Select;

UCLASS(Blueprintable)
class XRD777_API USelItem : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgProcWindow_Select* mpSelProcWindow;
    
public:
    USelItem();
};

