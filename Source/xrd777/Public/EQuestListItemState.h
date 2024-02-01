#pragma once
#include "CoreMinimal.h"
#include "EQuestListItemState.generated.h"

UENUM(BlueprintType)
enum class EQuestListItemState : uint8 {
    None,
    Ordered,
    Completed,
    Failed,
};

