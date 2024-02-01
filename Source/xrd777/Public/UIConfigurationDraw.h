#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DrawBGMParam.h"
#include "DrawConfigParam.h"
#include "ECmpLayoutConfig.h"
#include "ECmpLayoutConfigText.h"
#include "EUI_DRAW_POINT.h"
#include "UIDrawBaseActor.h"
#include "appCalculationType.h"
#include "UIConfigurationDraw.generated.h"

class UMaterialInterface;
class UObject;
class USprAsset;
class UTexture;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUIConfigurationDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProcessCompleted);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ItemDrawOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrawBGMParam> BgmParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* pKeySpr;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* HelpLayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* ConfigTextLayoutDataTable;
    
public:
    AUIConfigurationDraw();
    UFUNCTION(BlueprintCallable)
    void UpdateInWipe(float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCloseWipe(float inDeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateAnim(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_UpdateOnlyCursor(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Main();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_ListItem(int32 inMenueID, int32 InListIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BGMSelect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BG();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateBGMDraw_In();
    
    UFUNCTION(BlueprintCallable)
    void StartInWipe(bool IsTitle);
    
    UFUNCTION(BlueprintCallable)
    void StartCloseWipe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start_ToConfAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start_ToBGMAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start_MenuChangeAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start_InAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Start_CloseAnim();
    
    UFUNCTION(BlueprintCallable)
    void SetValueGaugeTouchCollision(const FDrawConfigParam& drawParam, float GaugeX, float GaugeY, float GaugeWidth, float GaugeHeight, float SliderX, float SliderY);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, int32 addLayer, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetSliderPos(int32 InMenuID, FVector2D InSliderPos);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollTouchCollision(float X, float Y, float Width, float Height, int32 addLayer, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollSize(FVector2D InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollPos(FVector2D InPos, float Height, float ScrollRange, int32 DrawListNum, int32 MaxListNum, int32 ScrollPosY);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarTouchCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 DrawListNum, int32 MaxListNum, int32 ScrollPosY, int32 addLayer, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool On_ValueChanged(int32 inMenueID, bool inFlag, int32 inValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool On_PlayingIndexChanged(int32 inPlayingIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool On_CursorIndexChanged_BGM(int32 inCursorIndex, int32 inListTopIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool On_CursorIndexChanged(int32 inCursorIndex, int32 inListTopIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool On_BgmSetIndexChanged(int32 inSetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowShow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTitleOpend();
    
    UFUNCTION(BlueprintCallable)
    bool IsScrollDrawBgmSelectText();
    
    UFUNCTION(BlueprintCallable)
    bool IsKeyConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConfigTypeMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBGMMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBaseDiffLuna();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSoundOutputText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSelLangText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlayingIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOnText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOffText();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListTopIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetListNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFisrt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDrawConfigParam GetIndexedDrawConfigParam(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetGradation2TopColour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetGradation2BottomColour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetGradation1TopColour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetGradation1BottomColour();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDrawConfigParam GetDrawConfigParam(int32 InMenuID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDifficultyText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCursorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetConfigTypeText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetButtonLayoutText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetBlueBoardColor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBGMText(int32 InSelect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBgmSetID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBgmListTopIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBgmCursorIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedHelpRootPosition(bool InIsBGMMode, FVector2D& OutPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAdjustedHelpBarOffset(bool InIsBGMMode, FVector2D& OutPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAdjustedConfigTextCol(ECmpLayoutConfigText InType, FVector2D& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAdjustedConfigPos(ECmpLayoutConfig InType, FVector2D Default, FVector2D& OutSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UMaterialInterface* Get_BgMaterial();
    
    UFUNCTION(BlueprintCallable)
    void DrawUim(UObject* inUimAsset, float InFrame, bool& bIsMaxFrame, const UTexture* inTexture);
    
    UFUNCTION(BlueprintCallable)
    void DrawNami();
    
    UFUNCTION(BlueprintCallable)
    void DrawKeyConfigSwitcher(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void DrawKeyConfigButtonSpr(float X, float Y, const FDrawConfigParam& DrawConfigParam, const FColor& RGBA, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable)
    void DrawInWipe();
    
    UFUNCTION(BlueprintCallable)
    void DrawHeroTexture(UTexture* inTexture);
    
    UFUNCTION(BlueprintCallable)
    void DrawHeroSilhouette(FVector2D Offset);
    
    UFUNCTION(BlueprintCallable)
    void DrawGlowCore(FVector2D Offset, FColor Color, float Scale, FVector2D PlusOffset, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable)
    void DrawCommonBg2(bool IsTitle);
    
    UFUNCTION(BlueprintCallable)
    void DrawCommonBg1();
    
    UFUNCTION(BlueprintCallable)
    void DrawCloseWipe();
    
    UFUNCTION(BlueprintCallable)
    void DrawBgmSelectText(float baseX, float baseY, float textX, float textY, uint8 textColorR, uint8 textColorG, uint8 textColorB, uint8 textColorA, float SizeX, float SizeY, const FDrawConfigParam& DrawConfigParam, UPARAM(Ref) FDrawBGMParam& DrawBGMParam, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable)
    void DrawAudioDeviceChange(float baseX, float baseY, float textX, float textY, uint8 textColorR, uint8 textColorG, uint8 textColorB, uint8 textColorA, float SizeX, float SizeY, const FDrawConfigParam& DrawConfigParam, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvFrameToTime(int32 InFrame);
    
    UFUNCTION(BlueprintCallable)
    void ConfigInAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    void Closed();
    
    UFUNCTION(BlueprintCallable)
    void BPUICommand_DrawSpr_Ex(const float X, const float Y, const float Z, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const int32 SprNo, const float ScaleX, const float ScaleY, const float PipodX, const float PipodY, const float Angle, const USprAsset* SprHandle);
    
    UFUNCTION(BlueprintCallable)
    void BgmSetAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    float BGMScaleCalculation(float InTimer, float InSrcValue, float InDstValue, int32 InWaitFrame, int32 InMoveFrame, appCalculationType InAnimType);
    
    UFUNCTION(BlueprintCallable)
    FVector2D BGMMoveCalculation(float InTimer, FVector2D InSrcValue, FVector2D InDstValue, int32 InWaitFrame, int32 InMoveFrame, appCalculationType InAnimType);
    
    UFUNCTION(BlueprintCallable)
    void BGMInAnimFinished();
    
    UFUNCTION(BlueprintCallable)
    float BGMAlphaCalculation(float InTimer, float InSrcValue, float InDstValue, int32 InWaitFrame, int32 InNextWaitFrame, int32 InMoveFrame, int32 InNextMoveFrame, appCalculationType InAnimType);
    
};

