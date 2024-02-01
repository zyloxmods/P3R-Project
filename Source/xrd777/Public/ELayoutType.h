#pragma once
#include "CoreMinimal.h"
#include "ELayoutType.generated.h"

UENUM(BlueprintType)
enum class ELayoutType : uint8 {
    Blank,
    StartPos,
    Enemy = 0xA,
    DirectEnemy = 0x14,
    EnemyPath = 0x64,
    TBox = 0x1E,
    DirectTBox = 0x28,
    RetDev = 0x32,
    NPC = 0x3C,
    Broken = 0x46,
    Reaper = 0x50,
    Clock = 0x5A,
    SecretGate = 0x6E,
};

