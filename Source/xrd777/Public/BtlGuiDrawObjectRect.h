#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawRect.h"
#include "EBtlTouchCallbackValue.h"
#include "EBtlTouchScreenID.h"
#include "BtlGuiDrawObjectRect.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectRect : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawRect Data;
    
    UBtlGuiDrawObjectRect();
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(EBtlTouchCallbackValue callbackValue, float adjustX, float adjustY, float adjustAngle, float adjustW, float adjustH, int32 addLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarTouchCollision(EBtlTouchScreenID screenID, float adjustX, float adjustY, float adjustAngle, float adjustW, float adjustH, bool onSlider);
    
    UFUNCTION(BlueprintCallable)
    void SetListTouchCollision(EBtlTouchScreenID screenID, int32 idx, float adjustX, float adjustY, float adjustAngle, float adjustW, float adjustH, int32 addLayer);
    
    UFUNCTION(BlueprintCallable)
    void OnEnableTouchCollision(bool onEnable);
    
};

