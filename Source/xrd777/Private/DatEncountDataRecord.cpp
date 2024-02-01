#include "DatEncountDataRecord.h"

FDatEncountDataRecord::FDatEncountDataRecord() {
    this->flags = 0;
    this->party_item = 0;
    this->party_item_num = 0;
    this->ID[0] = 0;
    this->ID[1] = 0;
    this->ID[2] = 0;
    this->ID[3] = 0;
    this->ID[4] = 0;
    this->major = 0;
    this->Minor = 0;
    this->Sound = 0;
    this->shuffleLevel = 0;
}

