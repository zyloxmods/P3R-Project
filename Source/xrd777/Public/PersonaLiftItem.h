#pragma once
#include "CoreMinimal.h"
#include "PersonaLiftItem.generated.h"

USTRUCT(BlueprintType)
struct FPersonaLiftItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 PersonaID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 OrFlag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AndFlag;
    
    XRD777_API FPersonaLiftItem();
};

