#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BustupModel.generated.h"

class UBustupDraw;

UCLASS(Blueprintable)
class XRD777_API UBustupModel : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBustupDraw* pBustupDraw;
    
public:
    UBustupModel();
};

