#include "EOSSessionP2PGameFlowPacket.h"

UEOSSessionP2PGameFlowPacket::UEOSSessionP2PGameFlowPacket() {
}

bool UEOSSessionP2PGameFlowPacket::SetResultForPossibleToChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bResult, bool _bAutoChangeGameFlow) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::SetResultForChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bResult) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::Notify(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::IsPossibleToChange(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bAutoChangeGameFlow) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::IsAutoChangeGameFlow() {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::Get(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::Change(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

bool UEOSSessionP2PGameFlowPacket::Accept(EEOSSessionP2PAFGameFlowStep _enGameFlowStep, bool _bAccepted) {
    return false;
}


