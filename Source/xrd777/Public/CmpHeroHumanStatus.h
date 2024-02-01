#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "CmpHeroHumanStatus.generated.h"

class UCmpHeroHumanStatusDraw;
class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpHeroHumanStatus : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatusDraw* pOffHumanParamDraw_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* pParent;
    
public:
    UCmpHeroHumanStatus();
};

