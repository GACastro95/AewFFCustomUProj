#include "SaveData_DownloaderOnEOS.h"

USaveData_DownloaderOnEOS::USaveData_DownloaderOnEOS() {
}

bool USaveData_DownloaderOnEOS::SetupEOS(UEOSUserContents* _pcEOSUserContents, UEOSTitleStorage* _pcEOSTitleStorage) {
    return false;
}

void USaveData_DownloaderOnEOS::OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress) {
}

void USaveData_DownloaderOnEOS::OnTitleStorageEvent(EEOSTitleStorageEvent _enTitleStorageEvent, UEOSTitleStorageBase* _pcTitleStorageBase, const FEOSTitleStorageProgress& _rstProgress) {
}


