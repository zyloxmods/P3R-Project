#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpStatus.generated.h"

class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpStatus : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* Actor_;
    
public:
    UCmpStatus();
};

