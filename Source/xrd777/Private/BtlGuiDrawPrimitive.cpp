#include "BtlGuiDrawPrimitive.h"

FBtlGuiDrawPrimitive::FBtlGuiDrawPrimitive() {
    this->Texture = NULL;
    this->useAnriAlias = false;
    this->SkipAntiFirstVtx = false;
    this->reverseAlpha = false;
    this->vertexLeftTurn = false;
    this->drawType = EBtlGuiDrawType::BTL_DTYPE_NORMAL;
}

