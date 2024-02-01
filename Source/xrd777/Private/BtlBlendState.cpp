#include "BtlBlendState.h"

FBtlBlendState::FBtlBlendState() {
    this->OpColor = EBtlGuiBlendOp::BTL_OP_ADD;
    this->SrcColor = EBtlGuiBlendFactor::BTL_BF_Zero;
    this->DstColor = EBtlGuiBlendFactor::BTL_BF_Zero;
    this->OpAlpha = EBtlGuiBlendOp::BTL_OP_ADD;
    this->SrcAlpha = EBtlGuiBlendFactor::BTL_BF_Zero;
    this->DstAlpha = EBtlGuiBlendFactor::BTL_BF_Zero;
    this->ColorWMask = EBtlGuiColorWhiteMask::BTL_CW_RGBA;
    this->OT = EBtlGuiOT::BTL_OT_LOW;
}

