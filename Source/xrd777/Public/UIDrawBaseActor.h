#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AppActor.h"
#include "EUIBLEND_STATE_TYPE.h"
#include "EUIBlendFactor.h"
#include "EUIBlendOperation.h"
#include "EUIFontStyle.h"
#include "EUIOTPRESET_BLEND_TYPE.h"
#include "EUI_DRAW_POINT.h"
#include "UIDrawBaseActor_CustomEventDelegate.h"
#include "UIDrawBaseActor.generated.h"

class UAssetLoader;
class UMaterialInstance;
class UObject;
class UPlgAsset;
class USprAsset;
class UTexture;
class UTextureRenderTarget2D;
class UUIDataAsset;

UCLASS(Blueprintable)
class XRD777_API AUIDrawBaseActor : public AAppActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* pAssetLoader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIDataAsset* ResourceDataAsset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIDrawBaseActor_CustomEvent SyncEndEvent;
    
public:
    AUIDrawBaseActor();
    UFUNCTION(BlueprintCallable)
    bool Sync();
    
protected:
    UFUNCTION(BlueprintCallable)
    void LoadStart();
    
    UFUNCTION(BlueprintCallable)
    UObject* GetResourceData(const int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawTriangle(const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawTexture(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float U0, const float V0, const float U1, const float v1, const UTexture* TextureHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawSpr(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float Angle, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawRectV4(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const float VX3, const float VY3, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawRect(const float X, const float Y, const float Z, const float Width, const float Height, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing);
    
    UFUNCTION(BlueprintCallable)
    void BPUIDebugCommand_DrawMaterial(const float X, const float Y, const float Z, const float Width, const float Height, const float Angle, const UMaterialInstance* pMaterialInstance);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_SetRenderTarget(const int32 CanvasIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_SetPresetBlendState(const EUIOTPRESET_BLEND_TYPE BlendType);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_SetBlendState(const EUIBlendOperation OpColor, const EUIBlendFactor SrcColor, const EUIBlendFactor DstColor, const EUIBlendOperation OpAlpha, const EUIBlendFactor SrcAlpha, const EUIBlendFactor DstAlpha);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_ScalingItalicFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float SizeX, const float SizeY, const float Scale, const float Angle, const bool ScalingOnlyX, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_ScalingFontDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float SizeX, const float SizeY, const float Scale, const float Angle, const bool ScalingOnlyX, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style, const bool IsScaling);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_ItalicFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UTextureRenderTarget2D* BPUICommand_GetRenderTarget(const int32 CanvasIndex);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_FontDrawFromFName(const float X, const float Y, const float Z, const FName& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_FontDrawExFromFName(const float X, const float Y, const float Z, const FName& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const float AnglePointX, const float AnglePointY, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_FontDrawEx(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const float AnglePointX, const float AnglePointY, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_FontDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawVerticalGradationRect(const float X, const float Y, const float Width, const float Height, const FColor TopColor, const FColor BottomColor);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawTriangle(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawTexture(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float U0, const float V0, const float U1, const float v1, const UTexture* TextureHandle, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawSpr(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float Angle, const USprAsset* SprHandle, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawSircle(const float X, const float Y, const float Z, const float Radius, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Antialiasing);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawScrollbar(const float X, const float Y, const float Z, const float Width, const float Height, const float ScrollRange, const int32 ScrollPos, const int32 DrawListNum, const int32 MaxListNum, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawRoundRect(const float X, const float Y, const float Z, const float Width, const float Height, const int32 Round, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawRectV4(const float X, const float Y, const float Z, const float VX0, const float VY0, const float VX1, const float VY1, const float VX2, const float VY2, const float VX3, const float VY3, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawRect(const float X, const float Y, const float Z, const float Width, const float Height, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float ScaleX, const float ScaleY, const float Angle, const float Antialiasing, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawPlg(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 PlgID, const float ScaleX, const float ScaleY, const float Angle, const UPlgAsset* PlgHandle);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawMaterial(const float X, const float Y, const float Z, const float Width, const float Height, const float Angle, const UObject* pMaterial);
    
    UFUNCTION(BlueprintCallable)
    USprAsset* BPUICommand_CastSprAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    UPlgAsset* BPUICommand_CastPlgAsset(UObject* Asset);
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_AtlUIBlendState(const EUIBLEND_STATE_TYPE BlendType);
    
    UFUNCTION(BlueprintCallable)
    void AddLoadAsset(const TSoftObjectPtr<UObject> SoftAsset);
    
};

