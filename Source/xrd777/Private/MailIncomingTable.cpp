#include "MailIncomingTable.h"

FMailIncomingTable::FMailIncomingTable() {
    this->MailID = 0;
    this->SenderID = 0;
    this->Group = 0;
    this->Category = 0;
    this->StartMonth = 0;
    this->StartDays = 0;
    this->EndMonth = 0;
    this->EndDays = 0;
    this->ReceiveTime = 0;
    this->Sun = false;
    this->Mon = false;
    this->Tue = false;
    this->Wed = false;
    this->Thr = false;
    this->Fri = false;
    this->Sat = false;
    this->Weekday = false;
    this->Holiday = false;
    this->RankUp = false;
    this->OnlyOnce = false;
    this->ArcanaID = 0;
    this->ArcanaCondition = 0;
    this->Rank = 0;
    this->InviteCounter = 0;
    this->CounterCondition = 0;
    this->CounterValue = 0;
}

