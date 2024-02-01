#pragma once
#include "CoreMinimal.h"
#include "UIScene.h"
#include "CmpPersonaList.generated.h"

class APersonaStatus;
class AUICmpPersona;

UCLASS(Blueprintable)
class XRD777_API UCmpPersonaList : public UUIScene {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUICmpPersona* Context_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* PSStatusActor_;
    
public:
    UCmpPersonaList();
};

