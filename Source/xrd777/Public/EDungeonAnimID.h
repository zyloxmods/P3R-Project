#pragma once
#include "CoreMinimal.h"
#include "EDungeonAnimID.generated.h"

UENUM(BlueprintType)
enum class EDungeonAnimID : uint8 {
    BLANK,
    Idel,
    Walk,
    Talk,
    SatMain,
    SatTalk,
    SatA,
    SatB,
    SatN,
    TurnL90,
    TurnR90,
    TurnL180,
    TurnR180,
    Run,
    Dash,
    AttackA = 0x32,
    AttackB,
    AttackAssault,
    DashStop,
    DashStopTurn,
    AttackDashA,
    DoorOpen00 = 0x73,
    PersonalAction1 = 0xC8,
    PersonalAction2,
    PersonalAction3,
    PersonalAction4,
    PersonalAction5,
    PersonalAction6,
    TurnL = 0xD2,
    TurnR,
};

