#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiTextType.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiTextType : uint8 {
    BTL_TTYPE_NORMAL,
    BTL_TTYPE_ITALIC,
    BTL_TTYPE_THEURGIA_ITALIC,
    BTL_TTYPE_MAX UMETA(Hidden),
};

