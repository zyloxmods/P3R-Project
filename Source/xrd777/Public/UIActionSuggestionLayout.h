#pragma once
#include "CoreMinimal.h"
#include "UIActionSuggestionLayout.generated.h"

UENUM(BlueprintType)
enum class UIActionSuggestionLayout : uint8 {
    ACTION_SUGGESTION_TEXT,
    ACTION_SUGGESTION_TEXT_POS_Y,
    ACTION_SUGGESTION_ICON_POS_Y,
    Max,
};

