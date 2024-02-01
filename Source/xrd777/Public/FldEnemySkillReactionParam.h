#pragma once
#include "CoreMinimal.h"
#include "FldEnemySkillReactionParam.generated.h"

USTRUCT(BlueprintType)
struct FFldEnemySkillReactionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJamming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPressure;
    
    XRD777_API FFldEnemySkillReactionParam();
};

