#pragma once
#include "CoreMinimal.h"
#include "EFldCmnDataBpClass.generated.h"

UENUM(BlueprintType)
enum class EFldCmnDataBpClass : uint8 {
    NpcIconActor_Normal,
    NpcIconActor_Talk,
    NpcIconActor_Cmm,
    NpcIconActor_Cmm_Reverse,
    NpcIconActor_Cmm_Object,
    NpcIconActor_Quest,
    NpcIconActor_MaleQuest,
    NpcIconActor_MaleQuest_Object,
    NpcIconActor_Dormitory,
    NpcIconActor_Study,
    NpcIconActor_Koromaru,
    NpcIconActor_Readed_Normal,
    NpcIconActor_Readed_Talk,
    WordIconActor_00,
    WordIconActor_Readed_00,
    WordIconActor_01,
    WordIconActor_Readed_01,
    WordIconActor_02,
    WordIconActor_03,
    Props_HeroPhone,
    CameraShakeActor,
    Max,
};

