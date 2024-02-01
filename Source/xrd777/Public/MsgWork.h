#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MsgWork.generated.h"

class UMsgManager;
class UTutorialManager;

UCLASS(Blueprintable)
class XRD777_API UMsgWork : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMsgManager* pMsgManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTutorialManager* pTutorialManager;
    
public:
    UMsgWork();
};

