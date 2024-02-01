#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UIDrawBaseActor.h"
#include "UIVoiceActionDraw.generated.h"

class UPlgAsset;
class USprAsset;

UCLASS(Blueprintable)
class XRD777_API AUIVoiceActionDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
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
    bool bIsStartInNetworkIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishInNetworkIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartOutNetworkIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishOutNetworkIconAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartInBlackBoardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishInBlackBoardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartOutBlackBoardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishOutBlackBoardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStartGetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsGetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USprAsset* SprData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlgAsset* PlgData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OffStartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDisp;
    
public:
    AUIVoiceActionDraw();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDrawNetworkIcon_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDrawNetworkIcon_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDrawBlackBoard_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDrawBlackBoard_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Network();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Frame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BG();
    
    UFUNCTION(BlueprintCallable)
    void OneTimeLockInput();
    
    UFUNCTION(BlueprintCallable)
    bool KeyHelpOut();
    
    UFUNCTION(BlueprintCallable)
    bool KeyHelpIn();
    
    UFUNCTION(BlueprintCallable)
    void InitSetDayTime();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDrawNetworkIcon_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDrawNetworkIcon_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDrawBlackBoard_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDrawBlackBoard_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_IN();
    
    UFUNCTION(BlueprintCallable)
    void DrawStickyNoteAverage(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawNetworkIconSecond(FVector2D InPos, FColor InColor, float Angle, float Scale);
    
    UFUNCTION(BlueprintCallable)
    void DrawNetworkIcon(FVector2D InPos, FColor InColor, float Angle, float IconAngle);
    
    UFUNCTION(BlueprintCallable)
    void DrawMonth(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDungeonActionStickyNote(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDungeonActionPercent(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDayOfWeek(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDay(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDailyActionStickyNote(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawDailyActionPercent(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawCommunityActionStickyNote(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawCommunityActionPercent(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawBlueBoard(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackBoard(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawBackBoard(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable)
    void DrawActionBoard(FVector2D InPos, FColor InColor, float Angle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvFrameToTime(int32 InFrame);
    
};

