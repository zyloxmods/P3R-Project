#include "ModelTest.h"
#include "ModelTestComp.h"

AModelTest::AModelTest() {
    this->mpModelTestComp = CreateDefaultSubobject<UModelTestComp>(TEXT("ModelTestComp"));
}

