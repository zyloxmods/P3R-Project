#pragma once
#include "CoreMinimal.h"
#include "EBtlGuiBlendFactor.h"
#include "EBtlGuiBlendOp.h"
#include "EBtlGuiColorWhiteMask.h"
#include "EBtlGuiOT.h"
#include "BtlBlendState.generated.h"

USTRUCT(BlueprintType)
struct FBtlBlendState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendOp OpColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendFactor SrcColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendFactor DstColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendOp OpAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendFactor SrcAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiBlendFactor DstAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiColorWhiteMask ColorWMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiOT OT;
    
    XRD777_API FBtlBlendState();
};

