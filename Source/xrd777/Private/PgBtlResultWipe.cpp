#include "PgBtlResultWipe.h"

FPgBtlResultWipe::FPgBtlResultWipe() {
    this->m_Watcher = NULL;
    this->m_bLoading = false;
    this->m_bLoaded = false;
    this->m_bMainLoaded = false;
}

