#include "BtlGuiDrawSprite.h"

FBtlGuiDrawSprite::FBtlGuiDrawSprite() {
    this->Sprite = NULL;
    this->grpNo = 0;
    this->SprNo = 0;
    this->drawType = EBtlGuiDrawType::BTL_DTYPE_NORMAL;
    this->RevHorizontal = false;
    this->RevVertical = false;
}

