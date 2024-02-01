#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OnConfirmDelegate.h"
#include "ConfigDialog.generated.h"

UCLASS(Blueprintable)
class XRD777_API UConfigDialog : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConfirm OnConfirm;
    
    UConfigDialog();
};

