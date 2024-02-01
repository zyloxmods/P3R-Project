#pragma once
#include "CoreMinimal.h"
#include "APCommandInstance.generated.h"

class UAPCommandBase;

USTRUCT(BlueprintType)
struct FAPCommandInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAPCommandBase* Command;
    
    AUTOPLAY_API FAPCommandInstance();
};

