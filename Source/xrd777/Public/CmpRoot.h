#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpRoot.generated.h"

class UCmpRootDraw;

UCLASS(Blueprintable)
class XRD777_API UCmpRoot : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpRootDraw* pRootDraw;
    
public:
    UCmpRoot();
};

