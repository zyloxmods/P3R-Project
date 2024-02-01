#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "UICmpPersona.generated.h"

class ACmpMainActor;
class APersonaStatus;
class UCmpPersona;
class UCmpPersonaList;
class UUISceneFSM;

UCLASS(Blueprintable)
class XRD777_API AUICmpPersona : public AAppActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUISceneFSM* SceneFSM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpPersonaList* PersonaList_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* PSStatusActor_;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpPersona* pParent;
    
    AUICmpPersona();
};

