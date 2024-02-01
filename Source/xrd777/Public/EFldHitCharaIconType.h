#pragma once
#include "CoreMinimal.h"
#include "EFldHitCharaIconType.generated.h"

UENUM(BlueprintType)
enum class EFldHitCharaIconType : uint8 {
    None,
    Normal,
    Talk,
    Cmm,
    Cmm_Normal,
    Cmm_Reverse,
    Cmm_Object,
    Quest,
    MaleQuest,
    MaleQuest_Object,
    Dormitory,
    Study,
    Koromaru,
    WORD_13,
    WORD_14,
    WORD_15,
    WORD_16,
    Max,
    TargetOnly,
    QuestHit,
};

