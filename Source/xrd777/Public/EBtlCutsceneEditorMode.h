#pragma once
#include "CoreMinimal.h"
#include "EBtlCutsceneEditorMode.generated.h"

UENUM(BlueprintType)
enum class EBtlCutsceneEditorMode : uint8 {
    NormalCamera,
    CharacterCamera,
    MoveCamera,
};

