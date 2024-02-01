#pragma once
#include "CoreMinimal.h"
#include "EFldMiniMapType_NPC.generated.h"

UENUM(BlueprintType)
enum class EFldMiniMapType_NPC : uint8 {
    Normal,
    Cmm,
    Cmm_Reverse,
    MaleQuest,
    Dormitory,
    Study,
    Koromaru,
    Cmm_Object,
    Quest,
    EFldMiniMapType_MAX UMETA(Hidden),
};

