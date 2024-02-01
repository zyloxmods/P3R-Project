#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AddContent.generated.h"

class AAddContentDialog;
class ADLCManager;

UCLASS(Blueprintable)
class XRD777_API UAddContent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADLCManager* mDlcManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAddContentDialog* mAdcDialog;
    
public:
    UAddContent();
};

