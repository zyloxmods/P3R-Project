#include "AutoPlayGameInstanceSubsystem.h"

UAutoPlayGameInstanceSubsystem::UAutoPlayGameInstanceSubsystem() {
    this->FontObject_ = NULL;
    this->CommandServer_ = NULL;
    this->CommandLogger_ = NULL;
    this->CommandManager_ = NULL;
    this->CommandWorker_ = NULL;
    this->PadImage_ = NULL;
    this->PadPress_ = NULL;
}

