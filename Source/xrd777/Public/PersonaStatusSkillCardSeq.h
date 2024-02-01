#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusSeq.h"
#include "PersonaStatusSkillCardSeq.generated.h"

class UPersonaStatusSelectSkillSeq;
class UPersonaStatusSkillHelpSeq;

UCLASS(Blueprintable)
class XRD777_API UPersonaStatusSkillCardSeq : public UPersonaStatusSeq {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSkillHelpSeq* SkillHelpSequence_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSelectSkillSeq* SelectSkillSequence_;
    
public:
    UPersonaStatusSkillCardSeq();
};

