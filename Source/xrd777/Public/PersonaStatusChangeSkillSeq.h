#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusSeq.h"
#include "PersonaStatusChangeSkillSeq.generated.h"

class UPersonaStatusSkillHelpSeq;

UCLASS(Blueprintable)
class XRD777_API UPersonaStatusChangeSkillSeq : public UPersonaStatusSeq {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSkillHelpSeq* SkillHelpSequence_;
    
public:
    UPersonaStatusChangeSkillSeq();
};

