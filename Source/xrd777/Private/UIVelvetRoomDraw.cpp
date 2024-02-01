#include "UIVelvetRoomDraw.h"

void AUIVelvetRoomDraw::UpdateTimes(const float DeltaTime) {
}

void AUIVelvetRoomDraw::UpdateMcaTimes(const float DeltaTime, const UObject* ResourceData) {
}

void AUIVelvetRoomDraw::UpdateCardTimes(const float DeltaTime, const UObject* ResourceData) {
}

int32 AUIVelvetRoomDraw::GetHeroCostumeID(int32 ForceID) {
    return 0;
}

void AUIVelvetRoomDraw::DrawTopHero(float X, float Y, float Width, float Height, const USceneCaptureComponent2D* pSceneCapture) {
}

void AUIVelvetRoomDraw::DrawTopHelpMessage(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawTopCard(FTransform Transform, const UObject* CardDataAsset) {
}

void AUIVelvetRoomDraw::DrawTopBlackDesign(const UObject* UniqueResource) {
}

void AUIVelvetRoomDraw::DrawSpecialCombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSpecialCombineList(const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSpecialCombineIgor(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture) {
}

void AUIVelvetRoomDraw::DrawSpecialCombineHeading(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSearchCombineSortPanel(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSearchCombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSearchCombineList(const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawSearchCombineIgor(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture) {
}

void AUIVelvetRoomDraw::DrawSearchCombineHeading(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawRegistryPlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawRegistryList(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawRegistryHelpMessage(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawRegistryHeading(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawRegistryElizabeth(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture, const UObject* Elizabeth) {
}

void AUIVelvetRoomDraw::DrawMessageWaitScene() {
}

void AUIVelvetRoomDraw::DrawHelpMessageSpecialCombine(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawHelpMessageSearchCombine(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawHelpMessage2Combine(const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerRegistryRate(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerPlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerListSortPanel(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerList(float X, float Y, float Angle, const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerHelpMessage(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerHeading(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::DrawDrawerElizabeth(float X, float Y, float Angle, const USceneCaptureComponent2D* pSceneCapture, const UObject* Elizabeth) {
}

void AUIVelvetRoomDraw::DrawBlackScreenMiddle() {
}

void AUIVelvetRoomDraw::DrawBlackScreenLow() {
}

void AUIVelvetRoomDraw::DrawBlackScreenHigh() {
}

void AUIVelvetRoomDraw::DrawBlackScreenFadeOut() {
}

void AUIVelvetRoomDraw::DrawBackgroundPanels(const TArray<FColor>& Colors, const TArray<int32>& BlackPanelIndex) {
}

void AUIVelvetRoomDraw::DrawBackgroundPanelLattices(const UObject* Resource) {
}

void AUIVelvetRoomDraw::Draw2CombinePlayerNameBoard(float X, float Y, float Angle, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::Draw2CombineList(const UObject* UniqueResource, const UObject* CommonResource) {
}

void AUIVelvetRoomDraw::Draw2CombineIgor(const USceneCaptureComponent2D* pSceneCapture) {
}

void AUIVelvetRoomDraw::Draw2CombineHeading(float X, float Y, const UObject* UniqueResource) {
}

void AUIVelvetRoomDraw::ApplyMcaToSceneCaptureComponent(USceneCaptureComponent2D* pCaptureComponent, UObject* pResource, EUIVELVET_ROOM_MCA_CAPTURE Type, FVector OffsetPoint, FRotator OffsetRotation, float OffsetFov) {
}

void AUIVelvetRoomDraw::ApplyMcaForSceneCaptureComponent2D(USceneCaptureComponent2D* SceneCaptureComponent2D, const UObject* McaResourceData) {
}

AUIVelvetRoomDraw::AUIVelvetRoomDraw() {
    this->Edit_Panel_InAnimation_Frame = 3;
    this->Edit_Panel_OutAnimation_Frame = 3;
    this->Edit_Panel_Loop_Wait_Time = 8.00f;
    this->Edit_Panel_Loop_Fade_In_Time = 1.00f;
    this->Edit_Panel_Loop_Fade_Out_Time = 1.00f;
    this->Edit_Cursor_InAnimation_Frame = 4;
    this->Edit_Dollar_Icon_Animation_Time = 2.50f;
    this->Edit_Equipe_Icon_Animation_Time = 1.50f;
    this->Edit_Equipe_Icon_Wait_Time = 2.50f;
    this->Edit_Equipe_Icon_FadeOut_Frame = 8;
    this->Edit_HelpMessage_Line_Height = 5.00f;
    this->Edit_Sort_Tab_Animation_Frame = 4;
    this->Scene = EUIVelvetRoomDrawScene::NONE;
    this->pPanel = NULL;
    this->pCamera = NULL;
    this->pPersonaStatus = NULL;
    this->Edit_PanelNoneColorRate = 75;
    this->Edit_InAnimationFrame_Lattice = 12;
    this->Edit_Hero_FadeOut_Frame = 5;
    this->Edit_HelpMessageInAnimationFrame = 5;
    this->Edit_HelpMessageOutAnimationFrame = 3;
    this->Edit_HelpMessageChangeAnimationFrame = 5;
    this->Edit_CardSadowScale = 0.95f;
    this->Edit_BlackScreenLow_FadeIn_Frame = 12;
    this->Edit_BlackScreenLow_FadeIn_Delay = 12;
    this->Edit_BlackScreenMiddle_FadeIn_Frame = 12;
    this->Edit_BlackScreenMiddle_FadeIn_Delay = 12;
    this->Edit_BlackScreenHigh_FadeIn_Frame = 12;
    this->Edit_BlackScreenHigh_FadeIn_Delay = 12;
    this->Edit_VelvetRoomTop_FadeOut_Frame = 12;
    this->Edit_VelvetRoomTop_CardIn_Delay = 12;
    this->Edit_VelvetRoomTop_KeyHelpIn_Delay = 70;
    this->Edit_VelvetRoomTop_Hero_Wave1_Fade_Delay = 150;
    this->Edit_VelvetRoomTop_Hero_Wave1_Fade_Frame = 180;
    this->Edit_VelvetRoomTop_Hero_Wave2_Fade_Delay = 150;
    this->Edit_VelvetRoomTop_Hero_Wave2_Fade_Frame = 180;
    this->CombineType = 0;
    this->IsHeroPlayMotion = false;
    this->pHeroWaveMaterial1 = NULL;
    this->pHeroWaveMaterial2 = NULL;
    this->pHeroWaveDynamicMaterial1 = NULL;
    this->pHeroWaveDynamicMaterial2 = NULL;
    this->pCard = NULL;
    this->pMca = NULL;
    this->Edit_2Combine_InAnimation_Frame = 8;
    this->Edit_2Combine_Igor_InAnimation_Frame = 5;
    this->Edit_2Combine_Heading_InAnimation_Frame = 8;
    this->Edit_2Combine_List_SelectedAnimation_Frame = 4;
    this->Edit_2Combine_List_Cursor_Animation_Frame = 4;
    this->Edit_2Combine_1Icon_Animation_Frame = 2;
    this->Edit_2Combine_Igor_Selected_Animation_Frame = 5;
    this->Edit_SearchCombine_Heading_InAnimation_Frame = 8;
    this->Edit_SearchCombine_Igor_Panel_InAnimation_Frame = 5;
    this->Edit_SearchCombine_Sort_Panel_InAnimation_Frame = 5;
    this->Edit_SearchCombine_Name_Panel_InAnimation_Frame = 8;
    this->Edit_SearchCombine_Help_Message_InAnimation_Frame = 8;
    this->Edit_SearchCombine_List_InAnimation_Frame = 8;
    this->Edit_SearchCombine_List_Fade_Out_Delay = 0;
    this->Edit_SearchCombine_List_Fade_Out_Frame = 1;
    this->Edit_SearchCombine_List_Fade_In_Delay = 1;
    this->Edit_SearchCombine_List_Fade_In_Frame = 3;
    this->Edit_SearchCombine_List_Slide_In_Delay = 1;
    this->Edit_SearchCombine_List_Slide_In_Frame = 3;
    this->Edit_SpecialCombine_Heading_InAnimation_Frame = 8;
    this->Edit_SpecialCombine_Igor_Panel_InAnimation_Frame = 5;
    this->Edit_SpecialCombine_Name_Panel_InAnimation_Frame = 8;
    this->Edit_SpecialCombine_Help_Message_InAnimation_Frame = 8;
    this->Edit_SpecialCombine_List_InAnimation_Frame = 8;
    this->Edit_Drawer_Heading_InAnimation_Frame = 8;
    this->Edit_Drawer_Elizabeth_Panel_InAnimation_Frame = 5;
    this->Edit_Drawer_Name_Panel_InAnimation_Frame = 8;
    this->Edit_Drawer_Money_InAnimation_Delay = 3;
    this->Edit_Drawer_Money_InAnimation_Frame = 13;
    this->Edit_Drawer_Money_OutAnimation_Delay = 3;
    this->Edit_Drawer_Money_OutAnimation_Frame = 20;
    this->Edit_Drawer_Help_Message_InAnimation_Frame = 8;
    this->Edit_Drawer_List_InAnimation_Frame = 8;
    this->Edit_Drawer_Sort_Panel_InAnimation_Frame = 5;
    this->Edit_Drawer_List_Switch_Angle_Animation_Frame = 6;
    this->Edit_Drawer_List_LockIcon_FadeIn_Delay = 0;
    this->Edit_Drawer_List_LockIcon_FadeIn_Frame = 6;
    this->Edit_Drawer_List_LockIcon_Animation_Delay = 3;
    this->Edit_Drawer_List_LockIcon_Animation_Frame1 = 3;
    this->Edit_Drawer_List_LockIcon_Animation_Frame2 = 2;
    this->Edit_Drawer_List_LockIcon_Animation_Frame3 = 3;
    this->Edit_Drawer_List_LockIcon_Scale1 = 1.05f;
    this->Edit_Drawer_List_LockIcon_Scale2 = 0.90f;
    this->Edit_Drawer_List_LockIcon_Scale3 = 0.90f;
    this->Edit_Drawer_List_LockIcon_Scale4 = 0.90f;
    this->Edit_Drawer_List_LockIcon_Angle1 = -10.00f;
    this->Edit_Drawer_List_LockIcon_Angle2 = 7.00f;
    this->Edit_Drawer_List_LockIcon_Angle3 = -6.00f;
    this->Edit_Drawer_List_LockIcon_Angle4 = 0.00f;
    this->Edit_Drawer_List_Switch_Heading_FadeOut_Delay = 0;
    this->Edit_Drawer_List_Switch_Heading_FadeOut_Frame = 1;
    this->Edit_Drawer_List_Switch_Heading_FadeIn_Delay = 1;
    this->Edit_Drawer_List_Switch_Heading_FadeIn_Frame = 4;
    this->Edit_Drawer_List_Switch_Heading_SlideIn_Delay = 1;
    this->Edit_Drawer_List_Switch_Heading_SlideIn_Frame = 4;
    this->Edit_Drawer_List_Change_Category_Fade_Out_Delay = 0;
    this->Edit_Drawer_List_Change_Category_Fade_Out_Frame = 1;
    this->Edit_Drawer_List_Change_Category_Fade_In_Delay = 1;
    this->Edit_Drawer_List_Change_Category_Fade_In_Frame = 3;
    this->Edit_Drawer_List_Change_Category_Slide_In_Delay = 1;
    this->Edit_Drawer_List_Change_Category_Slide_In_Frame = 3;
    this->Edit_Registry_Heading_InAnimation_Frame = 8;
    this->Edit_Registry_Elizabeth_Panel_InAnimation_Frame = 5;
    this->Edit_Registry_Name_Panel_InAnimation_Frame = 8;
    this->Edit_Registry_Help_Message_InAnimation_Frame = 8;
    this->Edit_Registry_List_InAnimation_Frame = 8;
    this->Edit_Registry_List_CheckMark_Slide_Delay = 0;
    this->Edit_Registry_List_CheckMark_Slide_Frame = 6;
    this->Edit_Registry_List_CheckMark_FadeIn_Delay = 0;
    this->Edit_Registry_List_CheckMark_FadeIn_Frame = 6;
}

