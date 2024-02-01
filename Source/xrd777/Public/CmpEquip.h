#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpEquip.generated.h"

class UCmpEquipDraw;
class UCmpEquipSystem;

UCLASS(Blueprintable)
class XRD777_API UCmpEquip : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpEquipSystem* PSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpEquipDraw* pDraw;
    
public:
    UCmpEquip();
};

