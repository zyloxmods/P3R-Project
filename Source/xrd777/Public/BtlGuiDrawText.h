#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawStructCore.h"
#include "EBtlGuiFontStyle.h"
#include "EBtlGuiTextType.h"
#include "BtlGuiDrawText.generated.h"

USTRUCT(BlueprintType)
struct FBtlGuiDrawText : public FBtlGuiDrawStructCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString str;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiTextType textType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiFontStyle fontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D adjustedScale;
    
    XRD777_API FBtlGuiDrawText();
};

