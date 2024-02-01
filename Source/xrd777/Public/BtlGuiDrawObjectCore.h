#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "BtlGuiDrawFlag.h"
#include "BtlGuiDrawObjectCore.generated.h"

class UBtlGuiDrawObjectCore;

UCLASS(Blueprintable)
class XRD777_API UBtlGuiDrawObjectCore : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Visible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 grpNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBtlGuiDrawObjectCore*> childObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBtlGuiDrawFlag drawFlag;
    
    UBtlGuiDrawObjectCore();
    UFUNCTION(BlueprintCallable)
    void SetScaleVec2(FVector2D Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetScaleAnchorPos(FVector2D anchor);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(float Scale);
    
    UFUNCTION(BlueprintCallable)
    void SetPos(FVector2D Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetColor(FColor Color);
    
    UFUNCTION(BlueprintCallable)
    void SetChildObject(UBtlGuiDrawObjectCore* Object, FBtlGuiDrawFlag flag);
    
    UFUNCTION(BlueprintCallable)
    void SetAngleAnchorPos(FVector2D anchor);
    
    UFUNCTION(BlueprintCallable)
    void SetAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void SetAnchorPos(FVector2D anchor);
    
    UFUNCTION(BlueprintCallable)
    void SetAlpha(float Alpha);
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetScaleAnchorPos();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetScale();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetPos();
    
    UFUNCTION(BlueprintCallable)
    FColor GetColor();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetAngleAnchorPos();
    
    UFUNCTION(BlueprintCallable)
    float GetAngle();
    
    UFUNCTION(BlueprintCallable)
    float GetAlpha();
    
};

