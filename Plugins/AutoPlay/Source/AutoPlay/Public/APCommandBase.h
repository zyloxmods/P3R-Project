#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "APCommandBase.generated.h"

UCLASS(Blueprintable)
class AUTOPLAY_API UAPCommandBase : public UObject {
    GENERATED_BODY()
public:
    UAPCommandBase();
};

