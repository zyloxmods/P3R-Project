#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillLimitTable.generated.h"

USTRUCT(BlueprintType)
struct FSkillLimitTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TotalSkillNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 InheritanceSkillNum;
    
    XRD777_API FSkillLimitTable();
};

