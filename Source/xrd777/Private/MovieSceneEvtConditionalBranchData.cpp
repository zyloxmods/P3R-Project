#include "MovieSceneEvtConditionalBranchData.h"

FMovieSceneEvtConditionalBranchData::FMovieSceneEvtConditionalBranchData() {
    this->ConditionalType = EEvtConditionalBranchType::AlwaysExecute;
    this->ConditionalNo = 0;
    this->ConditionalValue = 0;
    this->CompareType = EEvtConditionalBranchCompType::Equal;
}

