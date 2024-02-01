#pragma once
#include "CoreMinimal.h"
#include "EFldDataTable.generated.h"

UENUM(BlueprintType)
enum class EFldDataTable : uint8 {
    SubLevelList,
    VariationSubLevelList,
    CrowdSubLevelList,
    BgmList,
    NpcTypeList,
    PlayerCostumeList,
    ShortcutNameList,
    PlaceNameList,
    HitNameList_Daily,
    HitNameList_Dungeon,
    NpcNameList,
    TvProgram,
    MailOrder,
    CrowdWalkInit,
    SortieMember,
    LmapCmmNpcLayout,
    LmapNpcLayout,
    TemporalAAList,
    PersonalMotionList,
    PoolPack,
    PoolPack_PLAYGO,
    PoolConnect,
    RaytraceSettingList,
    Max,
};

