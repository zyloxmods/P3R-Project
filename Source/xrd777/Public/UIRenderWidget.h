#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/Texture.h"
#include "AppActorComponent.h"
#include "UIRenderWidget.generated.h"

class UTextureRenderTarget2D;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UUIRenderWidget : public UAppActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* RenderWidget;
    
public:
    UUIRenderWidget();
    UFUNCTION(BlueprintCallable)
    void SetPause(bool inPause);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPause();
    
    UFUNCTION(BlueprintCallable)
    bool Initialize(UTextureRenderTarget2D* inRenderTarget, UUserWidget* inRenderWidget, FVector2D DrawSize, bool inUseGamma, bool inClearTarget, TEnumAsByte<TextureFilter> inFilter);
    
    UFUNCTION(BlueprintCallable)
    void DrawToRenderTarget();
    
};

