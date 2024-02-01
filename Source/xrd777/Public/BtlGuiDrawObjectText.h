#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawText.h"
#include "BtlGuiDrawObjectText.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectText : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawText Data;
    
    UBtlGuiDrawObjectText();
    UFUNCTION(BlueprintCallable)
    void GetTextWidthHeight(float& Width, float& Height);
    
    UFUNCTION(BlueprintCallable)
    void CalcAdjustedScale(FBtlGuiDrawText Item, FVector2D textCollision, bool ScalingOnlyX, FVector2D& adjustedScale);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFontStyleMakeOffset();
    
};

