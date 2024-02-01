#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpItem.generated.h"

class APersonaStatus;
class UCmpItemDraw;
class UCmpItemSystem;

UCLASS(Blueprintable)
class XRD777_API UCmpItem : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpItemSystem* PSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpItemDraw* pDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* pPersonaStatus;
    
public:
    UCmpItem();
};

