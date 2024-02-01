#pragma once
#include "CoreMinimal.h"
#include "UIBaseActor.h"
#include "FclShopBase.generated.h"

class AScrActor;

UCLASS(Abstract, Blueprintable, NotPlaceable)
class XRD777_API AFclShopBase : public AUIBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AScrActor* ScrActor_;
    
public:
    AFclShopBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnFinishedScr(int32 ExitType);
    
};

