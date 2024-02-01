#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "UICmpCommu.generated.h"

class ACmpCommuModelController;
class ACmpMainActor;
class UCmpCommu;
class UCmpCommuDetails;
class UCmpCommuList;
class UUISceneFSM;

UCLASS(Blueprintable)
class XRD777_API AUICmpCommu : public AUIBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUISceneFSM* SceneFSM_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpCommuList* CommuListScene_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpCommuDetails* CommuDetailsScene_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpMainActor* pMainActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpCommu* pParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACmpCommuModelController* pModelController;
    
public:
    AUICmpCommu();
};

