#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MsgProcWindowBase.generated.h"

class UMsgItem;
class UTutorialManager;

UCLASS(Blueprintable)
class UMsgProcWindowBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgItem* pMsgWork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialManager* pTutorialManager;
    
public:
    UMsgProcWindowBase();
};

