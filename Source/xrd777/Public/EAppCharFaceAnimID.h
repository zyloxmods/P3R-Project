#pragma once
#include "CoreMinimal.h"
#include "EAppCharFaceAnimID.generated.h"

UENUM(BlueprintType)
enum class EAppCharFaceAnimID : uint8 {
    EA_Normal,
    EA_Smile,
    EA_Anger,
    EA_Sad,
    EA_Surprise,
    EA_Pain,
    EA_Sigh,
    EA_Shock,
    EA_Shout,
    EA_Daring,
    EA_Disappointed,
    EA_Laugh,
    EA_Agony,
    EA_Serious,
    EA_Summon,
    EA_CloseEyes,
    EA_Max,
};

