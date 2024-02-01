#pragma once
#include "CoreMinimal.h"
#include "CmpMenuBase.h"
#include "CmpSkill.generated.h"

class UCmpSkillDraw;
class UCmpSkillSystem;

UCLASS(Blueprintable)
class XRD777_API UCmpSkill : public UCmpMenuBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpSkillDraw* pSkillDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCmpSkillSystem* pSkillSystem;
    
public:
    UCmpSkill();
};

