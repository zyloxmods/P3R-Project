#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AppActorComponent.h"
#include "BtlBlendState.h"
#include "BtlGuiDrawImage.h"
#include "BtlGuiDrawLineFrame.h"
#include "BtlGuiDrawMaterial.h"
#include "BtlGuiDrawMsg.h"
#include "BtlGuiDrawPanel.h"
#include "BtlGuiDrawPlg.h"
#include "BtlGuiDrawPrimitive.h"
#include "BtlGuiDrawRect.h"
#include "BtlGuiDrawRoundRect.h"
#include "BtlGuiDrawSilhouette.h"
#include "BtlGuiDrawSprite.h"
#include "BtlGuiDrawText.h"
#include "EBtlGuiCanvas.h"
#include "EBtlGuiOT.h"
#include "BtlGuiDrawComponent.generated.h"

class ACameraActor;
class APlayerCameraManager;
class APlayerController;
class UBtlGuiDrawObjectClearScreen;
class UBtlGuiDrawObjectCore;
class UBtlGuiDrawObjectImage;
class UBtlGuiDrawObjectLineFrame;
class UBtlGuiDrawObjectMaterial;
class UBtlGuiDrawObjectMsg;
class UBtlGuiDrawObjectPanel;
class UBtlGuiDrawObjectPlg;
class UBtlGuiDrawObjectPrimitive;
class UBtlGuiDrawObjectRect;
class UBtlGuiDrawObjectRoundRect;
class UBtlGuiDrawObjectSilhouette;
class UBtlGuiDrawObjectSprite;
class UBtlGuiDrawObjectText;
class UObject;
class UPlgAsset;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class XRD777_API UBtlGuiDrawComponent : public UAppActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBtlGuiCanvas canvasType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBtlGuiDrawObjectCore*> ItemAry;
    
public:
    UBtlGuiDrawComponent();
    UFUNCTION(BlueprintCallable)
    UPlgAsset* TranslateObjectToPlgAsset(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void TranslateObjectToAsset(UObject* Obj, UClass* TranslateClass, UObject*& OutAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetItemVisible(int32 idx, bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetComponentBoolOff(bool isOff);
    
    UFUNCTION(BlueprintCallable)
    void SetCanvas(EBtlGuiCanvas Canvas);
    
    UFUNCTION(BlueprintCallable)
    void SetAryVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWindowsPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNotUsingPS4PS5GuardYesNoKey(UBtlGuiDrawObjectSprite* Item);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisible();
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetViewportSize();
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetRenderTarget(EBtlGuiCanvas Canvas);
    
    UFUNCTION(BlueprintCallable)
    void GetGroupDrawItem(int32 grpNo, TArray<int32>& idAry, TArray<UBtlGuiDrawObjectCore*>& objAry, bool Reverse);
    
    UFUNCTION(BlueprintCallable)
    void GetDrawItem(int32 ID, UBtlGuiDrawObjectCore*& Obj);
    
    UFUNCTION(BlueprintCallable)
    void GetAllDrawItem(TArray<int32>& idAry, TArray<UBtlGuiDrawObjectCore*>& objAry);
    
    UFUNCTION(BlueprintCallable)
    UTexture* FrameBufferCapture(bool is2DCapture);
    
    UFUNCTION(BlueprintCallable)
    void DrawAtCanvas(EBtlGuiCanvas useCanvas);
    
    UFUNCTION(BlueprintCallable)
    void Draw();
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawText(int32 grpNo, FBtlGuiDrawText Item, int32& outID, UBtlGuiDrawObjectText*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawSprite(int32 grpNo, FBtlGuiDrawSprite Item, int32& outID, UBtlGuiDrawObjectSprite*& outItem, bool onChangeByPlatform);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawSilhouette(int32 grpNo, FBtlGuiDrawSilhouette Item, int32& outID, UBtlGuiDrawObjectSilhouette*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawRoundRect(int32 grpNo, FBtlGuiDrawRoundRect Item, int32& outID, UBtlGuiDrawObjectRoundRect*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawRect(int32 grpNo, FBtlGuiDrawRect Item, int32& outID, UBtlGuiDrawObjectRect*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawPrimitive(int32 grpNo, FBtlGuiDrawPrimitive Item, int32& outID, UBtlGuiDrawObjectPrimitive*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawPlg(int32 grpNo, FBtlGuiDrawPlg Item, int32& outID, UBtlGuiDrawObjectPlg*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawPanel(int32 grpNo, FBtlGuiDrawPanel Item, int32& outID, UBtlGuiDrawObjectPanel*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawMsg(int32 grpNo, FBtlGuiDrawMsg Item, int32& outID, UBtlGuiDrawObjectMsg*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawMaterial(int32 grpNo, FBtlGuiDrawMaterial Item, int32& outID, UBtlGuiDrawObjectMaterial*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawLineFrame(int32 grpNo, FBtlGuiDrawLineFrame Item, int32& outID, UBtlGuiDrawObjectLineFrame*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawImageByStruct(int32 grpNo, FBtlGuiDrawImage Item, int32& outID, UBtlGuiDrawObjectImage*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void CreateDrawImage(int32 grpNo, UTexture* Texture, FVector2D Pos, int32& outID, UBtlGuiDrawObjectImage*& outItem);
    
    UFUNCTION(BlueprintCallable)
    void ClearScreen(int32 grpNo, int32& outID, UBtlGuiDrawObjectClearScreen*& outItem, FColor Color, EBtlGuiOT OT);
    
    UFUNCTION(BlueprintCallable)
    void ClearDrawItem();
    
    UFUNCTION(BlueprintCallable)
    void ClearCanvas(EBtlGuiCanvas Canvas, float Alpha, FBtlBlendState Bs);
    
    UFUNCTION(BlueprintCallable)
    static bool BtlGuiWorldToScreen2(FVector WorldPos, APlayerCameraManager* CameraManager, FVector2D& outPos, float& fZ, ACameraActor* CameraActor);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D BtlGuiWorldToScreen(FVector WorldPos, APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static void BtlGuiSetDrawEnable(bool isEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void BtlGuiCheckDrawEnable(bool& Enable);
    
};

