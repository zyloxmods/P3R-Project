#pragma once
#include "CoreMinimal.h"
#include "DarkHourWork.h"
#include "FadeProgramBase.h"
#include "FadePgDarkHour.generated.h"

UCLASS(Blueprintable)
class XRD777_API UFadePgDarkHour : public UFadeProgramBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDarkHourWork Work;
    
    UFadePgDarkHour();
};

