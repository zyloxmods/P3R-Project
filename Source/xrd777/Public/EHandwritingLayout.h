#pragma once
#include "CoreMinimal.h"
#include "EHandwritingLayout.generated.h"

UENUM(BlueprintType)
enum class EHandwritingLayout : uint8 {
    GROAN_1_POS_ROT,
    GROAN_1_SCALE,
    GROAN_2_POS_ROT,
    GROAN_2_SCALE,
    MUMBLE_1_POS_ROT,
    MUMBLE_1_SCALE,
    MUMBLE_2_POS_ROT,
    MUMBLE_2_SCALE,
    DOORKNOCK_1,
    DOORKNOCK_2,
    CALLING_1,
    CALLING_2,
    CALLING_3,
    WOOF_1,
    WOOF_2,
    WOOF_3,
    WOOF_4,
    WHINE_POS,
    WHINE_SCALE,
    BUZZ_1_POS,
    BUZZ_1_SCALE,
    BUZZ_2_POS,
    BUZZ_2_SCALE,
    DOUBLE_EXCLAMATION_POS,
    EXCLAMATION_QUESTION_POS,
    EXCLAMATION_QUESTION_SCALE,
    QUESTION_POS,
    Max,
};

