#pragma once
#include "CoreMinimal.h"
#include "EBtlCutsceneMoveMode.generated.h"

UENUM(BlueprintType)
enum class EBtlCutsceneMoveMode : uint8 {
    CharaToNormal,
    NormalToChara,
};

