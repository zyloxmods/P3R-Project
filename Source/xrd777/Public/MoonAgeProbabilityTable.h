#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MoonAgeProbabilityTable.generated.h"

USTRUCT(BlueprintType)
struct FMoonAgeProbabilityTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ConceptionRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SkillChangeRate;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 AccidentRate;
    
    XRD777_API FMoonAgeProbabilityTable();
};

