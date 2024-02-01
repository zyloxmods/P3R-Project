#include "BtlGuiDrawMsg.h"

FBtlGuiDrawMsg::FBtlGuiDrawMsg() {
    this->bmd = NULL;
    this->msgNo = 0;
    this->pageNo = 0;
    this->msgLine = 0;
    this->textType = EBtlGuiTextType::BTL_TTYPE_NORMAL;
    this->fontStyle = EBtlGuiFontStyle::BTL_FSTYLE_SMALL;
    this->lineBreak = 0.00f;
    this->MaxRow = 0;
    this->RowOffset = 0.00f;
}

