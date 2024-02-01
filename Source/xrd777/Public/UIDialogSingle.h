#pragma once
#include "CoreMinimal.h"
#include "UIDialogBase.h"
#include "UIDialogSingle.generated.h"

UCLASS(Blueprintable)
class XRD777_API AUIDialogSingle : public AUIDialogBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FirstChoices;
    
public:
    AUIDialogSingle();
};

