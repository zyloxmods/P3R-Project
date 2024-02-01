#pragma once
#include "CoreMinimal.h"
#include "FldEnemySkillReactionParam.h"
#include "FldEnemySkillReaction.generated.h"

USTRUCT(BlueprintType)
struct FFldEnemySkillReaction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemySkillReactionParam Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemySkillReactionParam Strong;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemySkillReactionParam Rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemySkillReactionParam Death;
    
    XRD777_API FFldEnemySkillReaction();
};

