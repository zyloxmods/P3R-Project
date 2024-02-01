#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ESaveDrawOpenType.h"
#include "ESaveLoadDateLayout.h"
#include "ESaveLoadLayout.h"
#include "ESaveLoadLayout2.h"
#include "EUIFontStyle.h"
#include "EUI_DRAW_POINT.h"
#include "SaveSlotItem.h"
#include "UIDrawBaseActor.h"
#include "SaveLoadDraw.generated.h"

class UTexture;

UCLASS(Blueprintable)
class XRD777_API ASaveLoadDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FProcessCompleted);
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BootMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenCamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUseScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartCloseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CursorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ListTopIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSaveSlotItem> SaveSlotItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESaveDrawOpenType OpenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllSlotNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheckOverListIndex;
    
public:
    ASaveLoadDraw();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Update(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_SaveDataList();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Close();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BG();
    
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(int32 Index, bool isSelected, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarSliderCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarBaseCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void PLNameFontDraw(const float X, const float Y, const FString& String, const FColor Color, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable)
    void PlayListInSE();
    
    UFUNCTION(BlueprintCallable)
    void LocationNameDraw(const float X, const float Y, const float Z, const FString& String, const uint8 R, const uint8 G, const uint8 B, const uint8 A, const float Scale, const float Angle, const EUI_DRAW_POINT DrawPoint, const EUIFontStyle Style);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMonthDayDisplayLanguages();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDebugDrawClearData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDayZeroPaddingLanguages(int32 InMonth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCheckedNetworkSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelDebugMonth(int32 InMonth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelDebugDay(int32 InDay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugMonth(int32 InMonth);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugDay(int32 InDay);
    
    UFUNCTION(BlueprintCallable)
    void DrawTextureEx(const float X, const float Y, const float Width, const float Height, const UTexture* TextureHandle, const EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvFrameToTime(int32 InFrame);
    
    UFUNCTION(BlueprintCallable)
    void CallOnFinishedInAnim();
    
    UFUNCTION(BlueprintCallable)
    void CallOnFinishedCloseAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D AdjustedLayoutPos(ESaveLoadLayout InLayoutId, FVector2D InDefaultPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D AdjustedLayout2Pos(ESaveLoadLayout2 InLayoutId, FVector2D InDefaultPos);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D AdjustedDateLayoutPos(ESaveLoadDateLayout InLayoutId, FVector2D InDefaultPos);
    
};

