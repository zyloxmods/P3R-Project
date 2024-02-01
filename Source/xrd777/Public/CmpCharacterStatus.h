#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "CmpCharacterStatus.generated.h"

class UCmpHeroHumanStatus;
class UUICmpStatus;

UCLASS(Blueprintable)
class XRD777_API UCmpCharacterStatus : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpHeroHumanStatus* HeroStatus_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICmpStatus* Owner_;
    
public:
    UCmpCharacterStatus();
};

