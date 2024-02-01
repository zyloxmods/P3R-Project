#include "BtlGuiDrawImage.h"

FBtlGuiDrawImage::FBtlGuiDrawImage() {
    this->Texture = NULL;
    this->Width = 0.00f;
    this->Height = 0.00f;
    this->drawType = EBtlGuiDrawType::BTL_DTYPE_NORMAL;
    this->RevHorizontal = false;
    this->RevVertical = false;
}

