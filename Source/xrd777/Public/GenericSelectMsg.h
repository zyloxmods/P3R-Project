#pragma once
#include "CoreMinimal.h"
#include "GenericSelectSystemBase.h"
#include "GenericSelectMsg.generated.h"

class UTexture;

UCLASS(Blueprintable)
class XRD777_API UGenericSelectMsg : public UGenericSelectSystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* SelectionImage_;
    
public:
    UGenericSelectMsg();
};

