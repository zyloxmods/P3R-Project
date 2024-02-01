#pragma once
#include "CoreMinimal.h"
#include "EAtlLevelSequenceActorType.generated.h"

UENUM(BlueprintType)
enum class EAtlLevelSequenceActorType : uint8 {
    UE4Default,
    AtlusEvent,
    AtlusBattle,
    AtlusBattleEvent,
    AtlusFieldEvent,
    AtlusEventTemplateFieldEvent,
};

