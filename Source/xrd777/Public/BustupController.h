#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BustupController.generated.h"

class UBustupModel;

UCLASS(Blueprintable)
class XRD777_API UBustupController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupModel* pModel;
    
public:
    UBustupController();
};

