#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusSeq.h"
#include "PersonaStatusParamUpSeq.generated.h"

class UPersonaStatusSkillHelpSeq;

UCLASS(Blueprintable)
class XRD777_API UPersonaStatusParamUpSeq : public UPersonaStatusSeq {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSkillHelpSeq* SkillHelpSequence_;
    
public:
    UPersonaStatusParamUpSeq();
};

