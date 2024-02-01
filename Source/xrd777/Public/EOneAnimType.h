#pragma once
#include "CoreMinimal.h"
#include "EOneAnimType.generated.h"

UENUM(BlueprintType)
enum class EOneAnimType : uint8 {
    Linear,
    Sin90,
    Sin180,
    Sin360,
    HSin180,
    EaseInOut,
    EaseOut1,
    EaseOut2,
    EaseOut3,
    CurveUp1,
    CurveUp2,
    CurveUp3,
    CurveDown1,
    CurveDown2,
    CurveDown3,
    Haneru1,
    Haneru1ST1,
    Haneru2,
    Haneru3,
    Fuwari1,
    Bowa1,
    Gachan2,
    KaesiSlide2,
    ButtonPush,
    YureruRot,
    Max,
};

