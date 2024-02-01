#pragma once
#include "CoreMinimal.h"
#include "EFldLmapData_NpcType.generated.h"

UENUM(BlueprintType)
enum class EFldLmapData_NpcType : uint8 {
    None,
    MaleQuest,
    Dormitory,
    Koromaru,
    Quest,
    EFldLmapData_MAX UMETA(Hidden),
};

