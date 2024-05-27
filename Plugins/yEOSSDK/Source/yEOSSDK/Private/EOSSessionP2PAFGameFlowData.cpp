#include "EOSSessionP2PAFGameFlowData.h"

UEOSSessionP2PAFGameFlowData::UEOSSessionP2PAFGameFlowData() {
}

void UEOSSessionP2PAFGameFlowData::SetPossibleChangeGameFlowStep(EEOSSessionP2PAFGameFlowStep _enStep) {
}

void UEOSSessionP2PAFGameFlowData::Reset() {
}

EEOSSessionP2PAFGameFlowStep UEOSSessionP2PAFGameFlowData::GetPossibleChangeGameFlowStep() const {
    return EEOSSessionP2PAFGameFlowStep::None;
}

EEOSSessionP2PAFGameFlowStep UEOSSessionP2PAFGameFlowData::GetGameFlowStep() const {
    return EEOSSessionP2PAFGameFlowStep::None;
}

bool UEOSSessionP2PAFGameFlowData::ChangeGameFlow(EEOSSessionP2PAFGameFlowStep _enStep) {
    return false;
}


