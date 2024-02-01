#pragma once
#include "CoreMinimal.h"
#include "PersonaStatusSeq.h"
#include "PersonaStatusLvUpSeq.generated.h"

class UPersonaStatusChangeSkillSeq;
class UPersonaStatusSelectSkillSeq;
class UPersonaStatusSkillHelpSeq;
class UUICombineCalc;

UCLASS(Blueprintable)
class XRD777_API UPersonaStatusLvUpSeq : public UPersonaStatusSeq {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSkillHelpSeq* SkillHelpSequence_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusSelectSkillSeq* SelectSkillSequence_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPersonaStatusChangeSkillSeq* ChangeSkillSequence_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUICombineCalc* CombineCalc_;
    
public:
    UPersonaStatusLvUpSeq();
};

