#include "PersonaStatusDraw.h"

void APersonaStatusDraw::Update(const float DeltaTime) {
}

void APersonaStatusDraw::SetupOutAnimation() {
}

UTexture* APersonaStatusDraw::GetCaptureRenderTarget() {
    return NULL;
}

void APersonaStatusDraw::DrawSkillSelectList(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawSkillInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawSkillCard(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawRegistrySkillList(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawRegistryPersonaInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawRegistryPersona(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawRegistryCommentary(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawOutAnimation() {
}

void APersonaStatusDraw::DrawLevelUpConception(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawLevelUp(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawExpBonus(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDrawerPersona(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDrawerConceptionInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDrawerConception(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefaultStatusParameter(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefaultPersonaInfoBackground(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefaultPersonaInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefaultPersona(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefaultCommentary(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefalutSkillList(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawDefalutConception(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawConceptionInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawCommuBonus(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawCombinePersonaInfo(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawCombinePersona(float X, float Y, float Angle) {
}

void APersonaStatusDraw::DrawBackground() {
}

void APersonaStatusDraw::DrawAttribute(float X, float Y, float Angle) {
}

APersonaStatusDraw::APersonaStatusDraw() {
    this->IsMemoryCheckPersonaModel = false;
    this->Edit_L1R1_Loop_Animation_Frame = 14;
    this->Edit_L1R1_Push_Animation_Frame = 4;
    this->Edit_Flickering_Loop_Frame = 20;
    this->Edit_Persona_Change_SlideIn_Frame = 3;
    this->Edit_Persona_Change_Slide_Value = 80.00f;
    this->Scene = EPERSONA_STATUS_DRAW_SCENE::NONE;
    this->pBackgroundMaterial = NULL;
    this->ModelCaptureUpdater = NULL;
    this->Edit_Background_FadeIn_Frame = 8;
    this->Edit_Caustics_SlideIn_Delay = 5;
    this->Edit_Caustics_SlideIn_Frame = 6;
    this->Edit_Caustics_RectMask_ScaleUp_Delay = 11;
    this->Edit_Caustics_RectMask_ScaleUp_Frame = 6;
    this->Edit_PersonaInfo_SlideIn_Delay = 5;
    this->Edit_PersonaInfo_SlideIn_Frame = 5;
    this->Edit_Attribute_Effect_Frame = 4;
    this->Edit_SkillList_SlideIn_Delay = 10;
    this->Edit_SkillList_SlideIn_Frame = 6;
    this->Edit_Parameter_SlideIn_Delay = 10;
    this->Edit_Parameter_SlideIn_Frame = 6;
    this->Edit_Persona_SlideIn_Delay = 5;
    this->Edit_Persona_SlideIn_Frame = 6;
    this->Edit_Parameter_Gage_Animation_Frame = 6;
    this->Edit_Parameter_Gage_Animation_Delay = 14;
    this->Edit_Parameter_UpGage_Animation_Frame = 2;
    this->Edit_Parameter_Incense_Value_FadeIn_Frame = 3;
    this->Edit_LevelUp_SlideIn_Frame = 10;
    this->Edit_LevelUp_Plate_FadeOut_Frame = 5;
    this->Edit_SkillAdd_Next_Skill_Start_Delay = 0;
    this->Edit_SkillAdd_Next_Skill_Plate_Color_Fade_Wait = 1.00f;
    this->Edit_SkillAdd_Next_Skill_Plate_Color_Fade_Time = 0.50f;
    this->Edit_SkillAdd_Next_Skill_Move_Frame = 8;
    this->Edit_SkillAdd_Next_Skill_In_Frame = 8;
    this->Edit_SkillAdd_Next_Skill_New_Slide_In_Frame = 5;
    this->Edit_SkillAdd_Next_Skill_New_Fade_In_Frame = 5;
    this->Edit_Conception_Level3_LoopAnimation_Frame = 30;
    this->Edit_Conception_Level1_LoopAnimation_Frame = 15;
    this->Edit_Conception_GetEffect_Scale_Frame = 60;
    this->Edit_Conception_GetEffect_FadeOut_Delay = 15;
    this->Edit_Conception_GetEffect_FadeOut_Frame = 4;
    this->Edit_Conception_Icon_Get_FadeOut_Delay = 16;
    this->Edit_Conception_Icon_Get_FadeOut_Frame = 3;
    this->Edit_SkillCard_FadeIn_Frame = 5;
    this->Edit_SkillCard_SlideIn_Frame = 5;
    this->Edit_SkillCard_Used_FadeOut_Frame = 3;
    this->Edit_SkillCard_Used_SlideeOut_Frame = 3;
    this->Edit_SkillCard_Used_Plate_AddEffect_Frame = 8;
    this->Edit_SkillCard_Used_Plate_LoopAnimation_Frame = 45;
    this->Edit_SkillCard_Used_GetIcon_SlideIn_Frame = 4;
    this->Edit_ChangeSkill_Skill_Name_Color_LoopAnimation_Frame = 20;
    this->Edit_ChangeSkill_1Effect_Delay = 10;
    this->Edit_ChangeSkill_BluePlate_SlideIn_Frame = 20;
    this->Edit_ChangeSkill_BluePlate_Slide_Wait_Frame = 30;
    this->Edit_ChangeSkill_BluePlate_SlideOut_Frame = 20;
    this->Edit_ChangeSkill_Change_Font_SlideIn_Delay = 20;
    this->Edit_ChangeSkill_Change_Font_SlideIn_Frame = 4;
    this->Edit_ChangeSkill_Change_Font_Slide_Wait_Frame = 20;
    this->Edit_ChangeSkill_Change_Font_SlideOut_Frame = 30;
    this->Edit_ChangeSkill_Change_Font_FadeIn_Delay = 20;
    this->Edit_ChangeSkill_Change_Font_FadeIn_Frame = 10;
    this->Edit_ChangeSkill_Change_Font_Fade_Wait_Frame = 20;
    this->Edit_ChangeSkill_Change_Font_FadeOut_Frame = 10;
    this->Edit_ChangeSkill_ChangeIcon_FadeIn_Frame = 4;
    this->Edit_ChangeSkill_ChangeIcon_SlideIn_Frame = 4;
    this->Edit_SkillInfo_SlideIn_Frame = 5;
    this->Edit_SkillInfo_FadeIn_Frame = 5;
    this->Edit_SkillInfo_SlideOut_Frame = 3;
    this->Edit_SkillInfo_FadeOut_Frame = 3;
    this->Edit_SkillInfo_Cursor_FadeIn_Frame = 5;
    this->Edit_SkillInfo_Cursor_FadeOut_Frame = 3;
    this->Edit_SkillInfo_Cursor_Frame = 2;
    this->Edit_SkillInfo_SubCursor_Frame = 5;
    this->Edit_AffinityCheck_Icon_Move_Frame = 1;
    this->Edit_AffinityCheck_Icon_1_Move_Delay = 1;
    this->Edit_AffinityCheck_Font_Delay = 4;
    this->Edit_AffinityCheck_Font_Move_Frame = 3;
    this->Edit_AffinityCheck_Font_1_Move_Delay = 1;
    this->Edit_AffinityCheck_Font_FadeIn_Frame = 3;
    this->Edit_AffinityCheck_Font_1_FadeIn_Delay = 1;
    this->Edit_SkillSelectList_SlideIn_Delay = 3;
    this->Edit_SkillSelectList_SlideIn_Frame = 6;
    this->Edit_SkillSelectList_FadeIn_Delay = 3;
    this->Edit_SkillSelectList_FadeIn_Frame = 6;
    this->Edit_SkillSelectList_SlideOut_Delay = 0;
    this->Edit_SkillSelectList_SlideOut_Frame = 6;
    this->Edit_SkillSelectList_FadeOut_Delay = 0;
    this->Edit_SkillSelectList_FadeOut_Frame = 6;
    this->Edit_SkillSelectList_RectScale_Delay = 0;
    this->Edit_SkillSelectList_RectScale_Frame = 6;
    this->Edit_SkillSelectList_Cursor_FadeIn_Delay = 5;
    this->Edit_SkillSelectList_Cursor_FadeIn_Frame = 4;
    this->Edit_SkillSelectList_Cursor_SlideIn_Delay = 5;
    this->Edit_SkillSelectList_Cursor_SlideIn_Frame = 4;
    this->Edit_SkillSelectList_SubCursor_SlideIn_Frame = 6;
    this->Edit_SkillSelectList_Cursor_Frame = 2;
    this->Edit_SkillSelectList_SubCursor_Frame = 5;
    this->Edit_SkillSelectList_Info_SlideIn_Frame = 4;
    this->Edit_SkillSelectList_Info_FadeIn_Frame = 4;
    this->Edit_SkillSelectList_Info_ChangeSlideIn_Frame = 3;
    this->Edit_SkillSelectList_Info_ChangeFadeIn_Frame = 3;
    this->Edit_Selected_Succession_Skill_SlideIn_Delay = 0;
    this->Edit_Selected_Succession_Skill_SlideIn_Frame = 3;
    this->Edit_Selected_Succession_Skill_FadeIn_Delay = 0;
    this->Edit_Selected_Succession_Skill_FadeIn_Frame = 3;
    this->Edit_Commentary_FadeIn_Frame = 6;
    this->Edit_Commentary_SlideIn_Frame = 6;
    this->Edit_Commentary_Persona_Slide_Delay = 0;
    this->Edit_Commentary_Persona_Slide_Frame = 4;
    this->Edit_Commentary_Info_FadeOut_Delay = 0;
    this->Edit_Commentary_Info_FadeOut_Frame = 4;
    this->Edit_Commentary_SkillList_Move_Delay = 0;
    this->Edit_Commentary_SkillList_Move_Frame = 6;
    this->Edit_Commentary_Paramter_Move_Delay = 0;
    this->Edit_Commentary_Paramter_Move_Frame = 6;
    this->Edit_Commentary_Affinity_FadeOut_Delay = 0;
    this->Edit_Commentary_Affinity_FadeOut_Frame = 3;
    this->Edit_Commentary_Affinity_SlideOut_Delay = 1;
    this->Edit_Commentary_Affinity_SlideOut_Frame = 8;
    this->Edit_Commentary_Rect_ScaleUp_Delay = 0;
    this->Edit_Commentary_Rect_ScaleUp_Frame = 6;
    this->Edit_Commentary_Font_Change_Frame = 3;
    this->Edit_Combine_CommuBonus_SlideIn_Frame = 10;
    this->Edit_Combine_CommuBonus_Plate_FadeOut_Frame = 6;
    this->Edit_Combine_CommuBonus_Font_FadeOut_Frame = 3;
    this->Edit_Combine_CommuBonus_Fix_Point_ColorChange_Frame1 = 4;
    this->Edit_Combine_CommuBonus_Fix_Point_ColorChange_Frame2 = 3;
    this->Edit_Combine_CommuBonus_ColorChange_Frame = 6;
    this->Edit_Combine_BonusExp_SlideIn_Delay = 0;
    this->Edit_Combine_BonusExp_SlideIn_Frame = 4;
    this->Edit_Combine_BonusExp_Fade_Frame = 2;
    this->Edit_Registry_LockIcon_InAnimation_Delay = 11;
    this->Edit_Registry_LockIcon_InAnimation_Frame = 5;
    this->Edit_Registry_Switch_Heading_SlideOut_Delay = 0;
    this->Edit_Registry_Switch_Heading_SlideOut_Frame = 5;
    this->Edit_Registry_Switch_Heading_FadeOut_Delay = 0;
    this->Edit_Registry_Switch_Heading_FadeOut_Frame = 5;
    this->Edit_Registry_Switch_Heading_SlideIn_Delay = 5;
    this->Edit_Registry_Switch_Heading_SlideIn_Frame = 5;
    this->Edit_Registry_Switch_Heading_FadeIn_Delay = 5;
    this->Edit_Registry_Switch_Heading_FadeIn_Frame = 5;
    this->Edit_Registry_Switch_Mark_Rotate_Animation_Frame = 5;
    this->LayoutTable = NULL;
    this->TextLayoutTable = NULL;
    this->TextPosRowLayoutTable = NULL;
    this->LayoutDataTable = NULL;
    this->TextLayoutDataTable = NULL;
    this->TextPosRowLayoutDataTable = NULL;
}

