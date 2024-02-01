#include "UIVelvetRoomRequestDraw.h"



int32 AUIVelvetRoomRequestDraw::GetSortType() const {
    return 0;
}

EQuestListItemState AUIVelvetRoomRequestDraw::GetQuestState(int32 Index) const {
    return EQuestListItemState::None;
}

int32 AUIVelvetRoomRequestDraw::GetQuestRank() {
    return 0;
}

bool AUIVelvetRoomRequestDraw::GetQuestNewFlag(int32 Index) const {
    return false;
}

int32 AUIVelvetRoomRequestDraw::GetQuestListMax() const {
    return 0;
}

int32 AUIVelvetRoomRequestDraw::GetQuestID(int32 Index) const {
    return 0;
}

int32 AUIVelvetRoomRequestDraw::GetCursorListTopIndex() {
    return 0;
}

int32 AUIVelvetRoomRequestDraw::GetCursorCurrentIndex() {
    return 0;
}

void AUIVelvetRoomRequestDraw::DrawQuestReward(float X, float Y, int32 Index) {
}

void AUIVelvetRoomRequestDraw::DrawQuestItem(float X, float Y, int32 Index) {
}

void AUIVelvetRoomRequestDraw::DrawQuestHelp(float X, float Y) {
}

void AUIVelvetRoomRequestDraw::DrawQuestDetails(float X, float Y) {
}



AUIVelvetRoomRequestDraw::AUIVelvetRoomRequestDraw() {
}

