#include "SaveData_DeleterOnEOS.h"

USaveData_DeleterOnEOS::USaveData_DeleterOnEOS() {
}

bool USaveData_DeleterOnEOS::SetupEOS(UEOSUserContents* _pcEOSUserContents) {
    return false;
}

void USaveData_DeleterOnEOS::OnUserContentsEvent(EEOSUserContentsEvent _enUserContentsEvent, UEOSUserContentsBase* _pcUserContentsBase, const FEOSUserContentProgress& _rstProgress) {
}


