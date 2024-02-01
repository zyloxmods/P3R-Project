#pragma once
#include "CoreMinimal.h"
#include "EBtlTacticsListTextLayout.generated.h"

UENUM(BlueprintType)
enum class EBtlTacticsListTextLayout : uint8 {
    CHARA_NAME,
    CHARA_NAME_POS,
    OPERATION_NAME,
    OPERATION_NAME_POS,
    MEMBER_CHARA_NAME_POS,
    MEMBER_OPERATION_NAME_POS,
    Max,
};

