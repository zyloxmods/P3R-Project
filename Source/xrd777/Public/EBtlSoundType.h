#pragma once
#include "CoreMinimal.h"
#include "EBtlSoundType.generated.h"

UENUM(BlueprintType)
enum class EBtlSoundType : uint8 {
    START,
    BTL_VOICE_HERO,
    BTL_VOICE_YUKARI,
    BTL_VOICE_JUNPEI,
    BTL_VOICE_SANADA,
    BTL_VOICE_MITURU,
    BTL_VOICE_FUKA,
    BTL_VOICE_AEGIS,
    BTL_VOICE_AMADA,
    BTL_VOICE_KOROMARU,
    BTL_VOICE_ARAGAKI,
    BTL_VOICE_ENEMY1,
    BTL_VOICE_ENEMY2,
    BTL_VOICE_ENEMY3,
    BTL_VOICE_ENEMY4,
    BTL_VOICE_ENEMY5,
};

