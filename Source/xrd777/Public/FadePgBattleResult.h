#pragma once
#include "CoreMinimal.h"
#include "FadeProgramBase.h"
#include "PgBtlResultWipe.h"
#include "FadePgBattleResult.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFadePgBattleResult : public UFadeProgramBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPgBtlResultWipe m_PgBtlResultWipe;
    
    UFadePgBattleResult();
};

