#pragma once
#include "CoreMinimal.h"
#include "APCommandReserve.generated.h"

class UAPCommandBase;

USTRUCT(BlueprintType)
struct FAPCommandReserve {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAPCommandBase* Command;
    
    AUTOPLAY_API FAPCommandReserve();
};

