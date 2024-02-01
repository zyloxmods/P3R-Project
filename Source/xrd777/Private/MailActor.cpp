#include "MailActor.h"

void AMailActor::OnFinishedScr(int32 ExitType) {
}

AMailActor::AMailActor() {
    this->Loader_ = NULL;
    this->ScrActor_ = NULL;
    this->MailDrawActorSC = NULL;
    this->MailDrawActor = NULL;
    this->LayoutData = NULL;
    this->textData = NULL;
}

