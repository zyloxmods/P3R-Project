#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUINameEntryLayout.h"
#include "EUI_DRAW_POINT.h"
#include "NameEntryDrawOnKeyEventDelegate.h"
#include "UIDrawBaseActor.h"
#include "UINameEntryDraw.generated.h"

class USprAsset;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AUINameEntryDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNameEntryDrawOnKeyEvent OnKeyEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsKeyOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnSceneOptionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* SprData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFirstStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InSecondStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InThirdStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFourthStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFirstEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InSecondEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InThirdEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InFourthEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutFirstStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutSecondStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutFirstEndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OutSecondEndFrame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* pLayoutDataTable;
    
public:
    AUINameEntryDraw();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Frame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BG();
    
    UFUNCTION(BlueprintCallable)
    void SetNameTouchCollision(FVector2D InName1Pos, FVector2D InName2Pos);
    
    UFUNCTION(BlueprintCallable)
    void SetDicitionTouchCollision(FVector2D InDicitionPos, FVector2D OptionScale, FVector2D DicitionScale, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool ResetDraw();
    
    UFUNCTION(BlueprintCallable)
    void PlaySENameEntry();
    
    UFUNCTION(BlueprintCallable)
    void OneTimeLockInput();
    
    UFUNCTION(BlueprintCallable)
    bool KeyHelpOut();
    
    UFUNCTION(BlueprintCallable)
    bool KeyHelpIn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsName2TypingOnKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsName2Entered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsName1TypingOnKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsName1Entered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyHelpGray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIsDeterminedByCross();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableOption();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorPreName2Use();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorPreName1Use();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorName2Use();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCursorName1Use();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAllNameEntered();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAdjustedLayoutScale(EUINameEntryLayout InLayoutId, FVector2D InDefaultScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAdjustedLayoutPosition(EUINameEntryLayout InLayoutId, FVector2D InDefaultPos);
    
    UFUNCTION(BlueprintCallable)
    void DrawTranslation(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawOptionsBase(FVector2D InPos, FColor InColor, FVector2D Scale, float Angle, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void DrawOptions(FVector2D InPos, FColor InColor, FVector2D Scale, float Angle, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void DrawName2Text(FVector2D InPos, FColor InColor, FColor InColorDown, FColor InColorUp);
    
    UFUNCTION(BlueprintCallable)
    void DrawName1Text(FVector2D InPos, FColor InColor, FColor InColorDown, FColor InColorUp);
    
    UFUNCTION(BlueprintCallable)
    void DrawGradationScreen(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawCursor1(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable)
    void DrawBlueLight(FVector2D InPos, FColor InColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvFrameToTime(int32 InFrame);
    
};

