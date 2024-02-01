#include "MailIncomingItem.h"

FMailIncomingItem::FMailIncomingItem() {
    this->ID = 0;
    this->SenderID = 0;
    this->Group = 0;
    this->Category = EMailCategory::Community;
    this->StartMonth = 0;
    this->StartDays = 0;
    this->EndMonth = 0;
    this->EndDays = 0;
    this->ReceiveTime = EMailTime::Morning;
    this->WeekFlag = 0;
    this->bWeekday = false;
    this->bHoliday = false;
    this->bRankUp = false;
    this->bOnlyOnce = false;
    this->ArcanaID = 0;
    this->ArcanaCondition = EMailCondition::Equal;
    this->Rank = 0;
    this->InviteCounter = 0;
    this->CounterID = 0;
    this->CounterCondition = EMailCondition::Equal;
    this->CounterValue = 0;
    this->SenderLabelID = 0;
    this->TitleLabelID = 0;
    this->BodyLabelID = 0;
}

