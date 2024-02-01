#pragma once
#include "CoreMinimal.h"
#include "AppActor.h"
#include "UIDialogBase.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUIDialogBase : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DialogMessage;
    
public:
    AUIDialogBase();
};

