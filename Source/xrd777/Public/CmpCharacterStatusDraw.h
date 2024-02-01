#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CmpCharacterStatusDraw.generated.h"

class ACmpMainActor;
class UCmpHeroHumanStatusDraw;
class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpCharacterStatusDraw : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatusDraw* HumanParamDraw_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* pParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
public:
    UCmpCharacterStatusDraw();
};

