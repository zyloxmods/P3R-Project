#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FldEnemyConditionAngerParam.h"
#include "FldEnemyConditionConfusionParam.h"
#include "FldEnemyConditionFearParam.h"
#include "FldEnemyNormalParam.h"
#include "FldEnemyRareParam.h"
#include "FldEnemyReaperParam.h"
#include "FldEnemySkillReaction.h"
#include "FldEnemyDataAsset.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFldEnemyDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScaleStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyNormalParam Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyConditionAngerParam anger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyConditionConfusionParam Confusion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyConditionFearParam fear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyNormalParam upset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyRareParam Rare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemyReaperParam Death;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFldEnemySkillReaction SkillReaction;
    
    UFldEnemyDataAsset();
};

