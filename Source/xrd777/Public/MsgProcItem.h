#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MsgProcItem.generated.h"

class UMsgItem;
class USelItem;

UCLASS(Blueprintable)
class UMsgProcItem : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgItem* pMsgItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USelItem* pSelItem;
    
public:
    UMsgProcItem();
};

