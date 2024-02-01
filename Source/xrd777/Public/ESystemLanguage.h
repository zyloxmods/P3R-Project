#pragma once
#include "CoreMinimal.h"
#include "ESystemLanguage.generated.h"

UENUM(BlueprintType)
enum class ESystemLanguage : uint8 {
    Japanese,
    English,
    French,
    Italian,
    German,
    Spanish,
    SimplifiedChinese,
    TraditionalChinese,
    Korean,
    Russian,
    Portuguese,
    Turkish,
    Polish,
    Max,
};

