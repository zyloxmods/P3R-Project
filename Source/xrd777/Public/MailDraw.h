#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EMailLayout.h"
#include "EUICommonResource.h"
#include "EUI_DRAW_POINT.h"
#include "MailDrawOnLoadedBustupEventDelegate.h"
#include "UIDrawBaseActor.h"
#include "UIMailListItem.h"
#include "MailDraw.generated.h"

class UAssetLoader;
class UDataTable;
class UTexture2D;
class UUILayoutDataTable;

UCLASS(Blueprintable)
class XRD777_API AMailDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDirectOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlipToMainAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFlipToListAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishInAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartListAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishListAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartMailAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishMailAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStartOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishOutAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsShowMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCloseMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishShowMsgAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFinishCloseMsgAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHaveScript;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DrawIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ScrollIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailScrollLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailRowCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailRowMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MailScrollMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIMailListItem> MailListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MailMainBustupTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAssetLoader* Loader;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMailDrawOnLoadedBustupEvent OnLoadedBustupEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* LayoutDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* textData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUILayoutDataTable* TextDataTable;
    
    AMailDraw();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TimeWithinRangeFrame(float NowTime, int32 StartFrame, int32 EndFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Mail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_List();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_IN();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_Frame();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool StateDraw_BG();
    
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(int32 Index, float X, float Y, float Width, float Height, EUI_DRAW_POINT DrawPoint, bool onList);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarSliderCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollBarBaseCollision(float X, float Y, float Width, float Height, float ScrollRange, int32 ScrollPos, int32 DrawListNum, int32 MaxListNum, EUI_DRAW_POINT DrawPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetMailListIsNew(int32 InIndex, bool InIsNew);
    
    UFUNCTION(BlueprintCallable)
    void OneTimeLockInput();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIsDeterminedByCross();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_Out();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_Mail();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_List();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool InitDraw_IN();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMailSenderID();
    
    UFUNCTION(BlueprintCallable)
    int32 GetListSenderID(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetListIsRead(int32 InIndex);
    
    UFUNCTION(BlueprintCallable)
    bool GetListIsNew(int32 InIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetAdjustedLayoutPosition(EMailLayout InLayoutId, FVector2D InDefaultPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DrawSprForUIResources(FVector2D InPos, FColor InColor, int32 SprID, FVector2D Scale, float Angle, EUICommonResource ResourceType, EUI_DRAW_POINT DrawPoint);
    
public:
    UFUNCTION(BlueprintCallable)
    void DrawMailTitleText(FVector2D InPos, FColor InColor, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawMailSenderText(FVector2D InPos, FColor InColor, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawMailMainText(FVector2D InPos, FColor InColor, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawListMailTitleText(int32 InIndex, FVector2D InPos, FColor InColor, float InScale);
    
    UFUNCTION(BlueprintCallable)
    void DrawListMailSenderText(int32 InIndex, FVector2D InPos, FColor InColor, float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ConvFrameToTime(int32 InFrame);
    
};

