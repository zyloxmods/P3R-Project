#pragma once
#include "CoreMinimal.h"
#include "MsgProcWindowBase.h"
#include "MsgProcWindow_Select.generated.h"

class USelItem;

UCLASS(Blueprintable)
class XRD777_API UMsgProcWindow_Select : public UMsgProcWindowBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelItem* pSelWork;
    
public:
    UMsgProcWindow_Select();
};

