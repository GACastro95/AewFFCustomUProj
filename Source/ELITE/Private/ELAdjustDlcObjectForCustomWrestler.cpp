#include "ELAdjustDlcObjectForCustomWrestler.h"

void UELAdjustDlcObjectForCustomWrestler::OnCheckScout_Implementation(UMyWrestlerDataObject* Object) {
}

void UELAdjustDlcObjectForCustomWrestler::OnCheckRoster_Implementation(UMyWrestlerDataObject* Object) {
}

void UELAdjustDlcObjectForCustomWrestler::InitCheckList_Implementation(const FUnavailableDlcData& UnavailableDlcData) {
}

UELAdjustDlcObjectForCustomWrestler::UELAdjustDlcObjectForCustomWrestler() {
    this->Template_M01_Object = NULL;
    this->Template_F01_Object = NULL;
    this->MovesAdjust = NULL;
}

