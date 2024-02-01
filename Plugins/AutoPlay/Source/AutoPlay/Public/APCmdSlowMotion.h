#pragma once
#include "CoreMinimal.h"
#include "APCommandBase.h"
#include "APCmdSlowMotion.generated.h"

UCLASS(Blueprintable)
class AUTOPLAY_API UAPCmdSlowMotion : public UAPCommandBase {
    GENERATED_BODY()
public:
    UAPCmdSlowMotion();
};

