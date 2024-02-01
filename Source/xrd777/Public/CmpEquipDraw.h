#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpEquipDraw.generated.h"

class ACmpMainActor;
class UCmpEquip;

UCLASS(Blueprintable)
class XRD777_API UCmpEquipDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpEquip* pParent;
    
public:
    UCmpEquipDraw();
};

