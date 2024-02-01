#pragma once
#include "CoreMinimal.h"
#include "FadeProgramBase.h"
#include "VelvetWipe.h"
#include "FadePgVelvetReturn.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFadePgVelvetReturn : public UFadeProgramBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVelvetWipe m_velvetWipe;
    
public:
    UFadePgVelvetReturn();
};

