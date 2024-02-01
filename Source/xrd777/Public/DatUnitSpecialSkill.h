#pragma once
#include "CoreMinimal.h"
#include "DatUnitSpecialSkill.generated.h"

USTRUCT(BlueprintType)
struct FDatUnitSpecialSkill {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 skillId[10];
    
    XRD777_API FDatUnitSpecialSkill();
};

