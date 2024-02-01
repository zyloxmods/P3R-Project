#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpHeroHumanStatusDraw.generated.h"

class ACmpMainActor;
class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpHeroHumanStatusDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* pParent;
    
public:
    UCmpHeroHumanStatusDraw();
};

