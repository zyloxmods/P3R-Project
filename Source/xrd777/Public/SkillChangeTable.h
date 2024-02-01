#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillChangeTable.generated.h"

USTRUCT(BlueprintType)
struct FSkillChangeTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SkillPack;
    
    XRD777_API FSkillChangeTable();
};

