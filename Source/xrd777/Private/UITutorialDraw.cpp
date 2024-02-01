#include "UITutorialDraw.h"

void AUITutorialDraw::DrawList(float X, float Y, float Angle) {
}

void AUITutorialDraw::DrawHelp(float X, float Y, float Angle) {
}

void AUITutorialDraw::DrawCloseWipe() {
}

void AUITutorialDraw::DrawCategorys(float X, float Y, float Angle) {
}

void AUITutorialDraw::DrawBackground(float X, float Y, float Angle) {
}

AUITutorialDraw::AUITutorialDraw() {
    this->pBackgroundMaterialDynamicInstance = NULL;
    this->pBmdAsset = NULL;
    this->Edit_Title_Logo_Slide_In_Delay = 0;
    this->Edit_Title_Logo_Slide_In_Frame = 5;
    this->Edit_Navy_Blue_Plate_Slide_In_Delay = 0;
    this->Edit_Navy_Blue_Plate_Slide_In_Frame = 5;
    this->Edit_Gradation_Slide_In_Delay = 2;
    this->Edit_Gradation_Slide_In_Frame = 5;
    this->Edit_White_Plate_Slide_In_Delay = 4;
    this->Edit_White_Plate_Slide_In_Frame = 5;
    this->Edit_Tab_Slide_In_Delay = 8;
    this->Edit_Tab_Slide_In_Frame = 5;
    this->Edit_Tab_Fade_In_Delay = 8;
    this->Edit_Tab_Fade_In_Frame = 2;
    this->Edit_List_Slide_In_Delay = 8;
    this->Edit_List_Slide_In_Frame = 3;
    this->Edit_List_Fade_In_Delay = 8;
    this->Edit_List_Fade_In_Frame = 3;
    this->Edit_List_Sub_Cursor_Slide_In_Delay = 11;
    this->Edit_List_Sub_Cursor_Slide_In_Frame = 2;
    this->Edit_List_Change_Fade_Out_Delay = 0;
    this->Edit_List_Change_Fade_Out_Frame = 2;
    this->Edit_List_Change_Fade_In_Delay = 6;
    this->Edit_List_Change_Fade_In_Frame = 3;
    this->Edit_List_Change_Slide_In_Delay = 6;
    this->Edit_List_Change_Slide_In_Frame = 3;
    this->Edit_Gradation_Change_Slide_In_Delay = 2;
    this->Edit_Gradation_Change_Slide_In_Frame = 4;
    this->Edit_Gradation_Change_Cross_Fade_Delay = 2;
    this->Edit_Gradation_Change_Cross_Fade_Frame = 4;
    this->Edit_Tab_Cursor_Frame = 3;
    this->Edit_List_Cursor_Frame = 3;
    this->Edit_List_Sub_Cursor_Frame = 3;
    this->Edit_Gray_Out_Frame = 3;
    this->pMainActor = NULL;
}

