#include "UIGenericSelectDraw.h"

void AUIGenericSelectDraw::UpdateTimes(const float DeltaTime) {
}

void AUIGenericSelectDraw::DrawTitle() {
}

void AUIGenericSelectDraw::DrawMultiplyPlates() {
}

void AUIGenericSelectDraw::DrawList() {
}

void AUIGenericSelectDraw::DrawItemInfo() {
}

void AUIGenericSelectDraw::DrawCharacter() {
}

AUIGenericSelectDraw::AUIGenericSelectDraw() {
    this->Edit_TitleLogo_LoopAnima_Offset_Min = 33.00f;
    this->Edit_TitleLogo_LoopAnima_Offset_Max = 44.00f;
    this->Edit_Character_LoopAnima_Offset_Min = 64.00f;
    this->Edit_Character_LoopAnima_Offset_Max = 74.00f;
    this->Edit_Cursor_AnimationFrame = 4;
    this->Edit_SubCursor_AnimationFrame = 6;
    this->Edit_InAnimation_1_1 = 10;
    this->Edit_InAnimation_1_1_2 = 15;
    this->Edit_InAnimation_1_3 = 6;
    this->Edit_InAnimation_1_3_CharacterMask_DelayFrame = 2;
    this->Edit_InAnimation_1_4_ListItem_InFrame = 4;
    this->Edit_InAnimation_1_4_ListItem_DelayFrame = 1;
    this->Edit_InAnimation_1_4_Cursor_InFrame = 4;
    this->Edit_InAnimation_1_4_Cursor_DelayFrame = 3;
    this->Edit_LoopAnima_Frame_Min = 6;
    this->Edit_LoopAnima_Frame_Max = 12;
    this->Edit_OutAnimation_3_1 = 4;
    this->Edit_CharacterChange_In_Frame = 6;
    this->Edit_CharacterChange_Out_Frame = 5;
    this->Edit_CharacterChange_Slide_Frame = 5;
    this->pSprAsset = NULL;
    this->pPlgAsset = NULL;
    this->pCharacterDataAsset = NULL;
    this->PSystem = NULL;
}

