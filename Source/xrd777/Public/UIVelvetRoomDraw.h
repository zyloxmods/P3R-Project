#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUIVELVET_ROOM_MCA_CAPTURE.h"
#include "EUIVelvetRoomDrawScene.h"
#include "UIDrawBaseActor.h"
#include "UIVelvetRoomDraw_CustomEventDelegate.h"
#include "UIVelvetRoomDraw.generated.h"

class ACameraActor;
class APersonaStatus;
class AUIVelvetRoomPanel;
class UMaterialInstance;
class UMaterialInstanceDynamic;
class UObject;
class USceneCaptureComponent2D;
class UUIVelvetRoomMca;
class UUIVelvetRoomUimCard;

UCLASS(Blueprintable)
class XRD777_API AUIVelvetRoomDraw : public AUIDrawBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Panel_OutAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Panel_Loop_Wait_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Panel_Loop_Fade_In_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Panel_Loop_Fade_Out_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Cursor_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Dollar_Icon_Animation_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Equipe_Icon_Animation_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Equipe_Icon_Wait_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Equipe_Icon_FadeOut_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_HelpMessage_Line_Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Sort_Tab_Animation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EUIVelvetRoomDrawScene Scene;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUIVelvetRoomPanel* pPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACameraActor* pCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APersonaStatus* pPersonaStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_PanelNoneColorRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_InAnimationFrame_Lattice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Hero_FadeOut_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_HelpMessageInAnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_HelpMessageOutAnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_HelpMessageChangeAnimationFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Edit_CardOffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Edit_CardOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Edit_CardSadowOffsetPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Edit_CardSadowOffsetRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_CardSadowScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenLow_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenLow_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenMiddle_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenMiddle_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenHigh_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_BlackScreenHigh_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_FadeOut_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_CardIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_KeyHelpIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_VelvetRoomTop_Capture_OffsetUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_Hero_Wave1_Fade_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_Hero_Wave1_Fade_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_Hero_Wave2_Fade_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_VelvetRoomTop_Hero_Wave2_Fade_Frame;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIVelvetRoomDraw_CustomEvent OnCardSelectEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIVelvetRoomDraw_CustomEvent OnUniqeMotionEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIVelvetRoomDraw_CustomEvent OnTopInAnimationEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUIVelvetRoomDraw_CustomEvent OnTopOutAnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CombineType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHeroPlayMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pHeroWaveMaterial1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* pHeroWaveMaterial2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pHeroWaveDynamicMaterial1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* pHeroWaveDynamicMaterial2;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomUimCard* pCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIVelvetRoomMca* pMca;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_Igor_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_Heading_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_List_SelectedAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_List_Cursor_Animation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_1Icon_Animation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_2Combine_Igor_Selected_Animation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_2Combine_Capture_OffsetUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_Heading_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_Igor_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_Sort_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_Name_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_Help_Message_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_SearchCombine_Capture_OffsetUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Fade_Out_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Fade_Out_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Fade_In_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Fade_In_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Slide_In_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SearchCombine_List_Slide_In_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SpecialCombine_Heading_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SpecialCombine_Igor_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SpecialCombine_Name_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SpecialCombine_Help_Message_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_SpecialCombine_List_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_SpecialCombine_Capture_OffsetUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Heading_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Elizabeth_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Name_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Money_InAnimation_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Money_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Money_OutAnimation_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Money_OutAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Help_Message_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_Sort_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Angle_Animation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_Animation_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_Animation_Frame1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_Animation_Frame2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_LockIcon_Animation_Frame3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Scale1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Scale2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Scale3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Scale4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Angle1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Angle2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Angle3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Edit_Drawer_List_LockIcon_Angle4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_FadeOut_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_FadeOut_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_SlideIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Switch_Heading_SlideIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_Drawer_Capture_OffsetUV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Fade_Out_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Fade_Out_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Fade_In_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Fade_In_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Slide_In_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Drawer_List_Change_Category_Slide_In_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_Heading_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_Elizabeth_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_Name_Panel_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_Help_Message_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_List_InAnimation_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_List_CheckMark_Slide_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_List_CheckMark_Slide_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_List_CheckMark_FadeIn_Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Edit_Registry_List_CheckMark_FadeIn_Frame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Edit_Registry_Capture_OffsetUV;
    
public:
    AUIVelvetRoomDraw();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateTimes(const float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMcaTimes(const float DeltaTime, const UObject* ResourceData);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCardTimes(const float DeltaTime, const UObject* ResourceData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHeroCostumeID(int32 ForceID);
    
    UFUNCTION(BlueprintCallable)
    void DrawTopHero(float X, float Y, float Width, float Height, const USceneCaptureComponent2D* pSceneCapture);
    
    UFUNCTION(BlueprintCallable)
    void DrawTopHelpMessage(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawTopCard(FTransform Transform, const UObject* CardDataAsset);
    
    UFUNCTION(BlueprintCallable)
    void DrawTopBlackDesign(const UObject* UniqueResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSpecialCombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSpecialCombineList(const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSpecialCombineIgor(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture);
    
    UFUNCTION(BlueprintCallable)
    void DrawSpecialCombineHeading(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSearchCombineSortPanel(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSearchCombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSearchCombineList(const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawSearchCombineIgor(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture);
    
    UFUNCTION(BlueprintCallable)
    void DrawSearchCombineHeading(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawRegistryPlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawRegistryList(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawRegistryHelpMessage(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawRegistryHeading(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawRegistryElizabeth(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture, const UObject* Elizabeth);
    
    UFUNCTION(BlueprintCallable)
    void DrawMessageWaitScene();
    
    UFUNCTION(BlueprintCallable)
    void DrawHelpMessageSpecialCombine(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawHelpMessageSearchCombine(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawHelpMessage2Combine(const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerRegistryRate(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerPlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerListSortPanel(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerList(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerHelpMessage(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerHeading(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void DrawDrawerElizabeth(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture, const UObject* Elizabeth);
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackScreenMiddle();
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackScreenLow();
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackScreenHigh();
    
    UFUNCTION(BlueprintCallable)
    void DrawBlackScreenFadeOut();
    
    UFUNCTION(BlueprintCallable)
    void DrawBackgroundPanels(const TArray<FColor>& Colors, const TArray<int32>& BlackPanelIndex);
    
    UFUNCTION(BlueprintCallable)
    void DrawBackgroundPanelLattices(const UObject* Resource);
    
    UFUNCTION(BlueprintCallable)
    void Draw2CombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void Draw2CombineList(const UObject* UniqueResource, const UObject* CommonResource);
    
    UFUNCTION(BlueprintCallable)
    void Draw2CombineIgor(const USceneCaptureComponent2D* pSceneCapture);
    
    UFUNCTION(BlueprintCallable)
    void Draw2CombineHeading(float X, float Y, const UObject* UniqueResource);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMcaToSceneCaptureComponent(USceneCaptureComponent2D* pCaptureComponent, UObject* pResource, EUIVELVET_ROOM_MCA_CAPTURE Type, FVector OffsetPoint, FRotator OffsetRotation, float OffsetFov);
    
    UFUNCTION(BlueprintCallable)
    void ApplyMcaForSceneCaptureComponent2D(USceneCaptureComponent2D* SceneCaptureComponent2D, const UObject* McaResourceData);
    
};

