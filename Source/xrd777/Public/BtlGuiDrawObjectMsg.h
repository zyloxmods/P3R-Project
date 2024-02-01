#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawMsg.h"
#include "BtlGuiDrawObjectCore.h"
#include "BtlGuiDrawObjectMsg.generated.h"

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectMsg : public UBtlGuiDrawObjectCore {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawMsg Data;
    
    UBtlGuiDrawObjectMsg();
    UFUNCTION(BlueprintCallable)
    void SetSkillHelpMsg();
    
    UFUNCTION(BlueprintCallable)
    void SetItemHelpMsg(int32 ItemId);
    
    UFUNCTION(BlueprintCallable)
    void ResetBmd();
    
    UFUNCTION(BlueprintCallable)
    void ReCreateMsgInfo();
    
    UFUNCTION(BlueprintCallable)
    void GetMsgWindowLength(float& Width, float& Height);
    
    UFUNCTION(BlueprintCallable)
    void CalcAdjustedScaleOnlyX(FBtlGuiDrawMsg Item, FVector2D textCollision, FVector2D& adjustedScale);
    
    UFUNCTION(BlueprintCallable)
    void CalcAdjustedScale(FBtlGuiDrawMsg Item, FVector2D textCollision, FVector2D& adjustedScale, float& lineBreak, bool onKeepScale);
    
};

