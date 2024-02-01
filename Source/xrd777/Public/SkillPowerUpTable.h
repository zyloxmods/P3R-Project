#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SkillPowerUpTable.generated.h"

USTRUCT(BlueprintType)
struct FSkillPowerUpTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 OldSkill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 NewSkill;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 LevelLimit;
    
    XRD777_API FSkillPowerUpTable();
};

