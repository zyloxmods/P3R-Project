#include "VelvetRoomQuestRequest.h"

FVelvetRoomQuestRequest::FVelvetRoomQuestRequest() {
    this->Type = EQuestRequestType::Event;
    this->PersonaType = EQuestRequestPersonaType::None;
    this->OPTION = EQuestRequestOption::None;
    this->ID = 0;
    this->Value = 0;
    this->Penalty = 0;
}

