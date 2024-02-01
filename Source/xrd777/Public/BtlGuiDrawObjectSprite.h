#pragma once
#include "CoreMinimal.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawSprite.h"
#include "EBtlTouchCallbackValue.h"
#include "EBtlTouchScreenID.h"
#include "BtlGuiDrawObjectSprite.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectSprite : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawSprite Data;
    
    UBtlGuiDrawObjectSprite();
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(EBtlTouchCallbackValue callbackValue, float adjustX, float adjustY, float adjustAngle, float adjustW, float adjustH, int32 addLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetListTouchCollision(EBtlTouchScreenID screenID, int32 idx, float adjustX, float adjustY, float adjustAngle, float adjustW, float adjustH, int32 addLayer);
    
    UFUNCTION(BlueprintCallable)
    void OnEnableTouchCollision(bool onEnable);
    
    UFUNCTION(BlueprintCallable)
    void GetWidthHeight(float& Width, float& Height);
    
};

