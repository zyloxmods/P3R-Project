#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BtlSupportInfoBase.generated.h"

class UBtlSupportInfoMessage;

UCLASS(Blueprintable)
class XRD777_API UBtlSupportInfoBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBtlSupportInfoMessage* SupportInfoMessage;
    
    UBtlSupportInfoBase();
};

