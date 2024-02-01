#include "EvtMoviePayload.h"

FEvtMoviePayload::FEvtMoviePayload() {
    this->ID = 0;
    this->Operation = EEvtMovieOperation::Play;
    this->SeekFrame = 0;
}

