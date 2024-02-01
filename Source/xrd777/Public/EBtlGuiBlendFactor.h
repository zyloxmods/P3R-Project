#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiBlendFactor.generated.h"

UENUM(BlueprintType)
enum class EBtlGuiBlendFactor : uint8 {
    BTL_BF_Zero,
    BTL_BF_One,
    BTL_BF_SourceColor,
    BTL_BF_InverseSourceColor,
    BTL_BF_SourceAlpha,
    BTL_BF_InverseSourceAlpha,
    BTL_BF_DestAlpha,
    BTL_BF_InverseDestAlpha,
    BTL_BF_DestColor,
    BTL_BF_InverseDestColor,
    BTL_BF_ConstantBlendFactor,
    BTL_BF_InverseConstantBlendFactor,
    BTL_BF_Source1Color,
    BTL_BF_InverseSource1Color,
    BTL_BF_Source1Alpha,
    BTL_BF_InverseSource1Alpha,
    BTL_BF_MAX UMETA(Hidden),
};

