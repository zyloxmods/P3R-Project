#pragma once
#include "CoreMinimal.h"
#include "MatineeCameraShake.h"
#include "NiagaraCameraShake.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NIAGARAEXTENDS_API UNiagaraCameraShake : public UMatineeCameraShake {
    GENERATED_BODY()
public:
    UNiagaraCameraShake();
};

