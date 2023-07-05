#include "EOSUserContentProgress.h"

FEOSUserContentProgress::FEOSUserContentProgress() {
    this->Binary = NULL;
    this->TransferredFileSize = 0;
    this->Progress = 0.00f;
    this->Canceled = false;
    this->AutoRemove = false;
}

