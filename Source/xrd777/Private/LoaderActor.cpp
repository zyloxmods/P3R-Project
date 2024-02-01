#include "LoaderActor.h"
#include "AtomCueSheetLoaderComponent.h"

void ALoaderActor::OnLoadFailed() {
}

void ALoaderActor::OnLoadCompleted() {
}

ALoaderActor::ALoaderActor() {
    this->Loader = CreateDefaultSubobject<UAtomCueSheetLoaderComponent>(TEXT("CueSheetLoader"));
}

