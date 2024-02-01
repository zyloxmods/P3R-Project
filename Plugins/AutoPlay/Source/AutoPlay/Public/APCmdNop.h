#pragma once
#include "CoreMinimal.h"
#include "APCommandBase.h"
#include "APCmdNop.generated.h"

UCLASS(Blueprintable)
class AUTOPLAY_API UAPCmdNop : public UAPCommandBase {
    GENERATED_BODY()
public:
    UAPCmdNop();
};

