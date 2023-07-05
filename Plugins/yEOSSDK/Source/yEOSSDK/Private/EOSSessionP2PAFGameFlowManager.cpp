#include "EOSSessionP2PAFGameFlowManager.h"

bool UEOSSessionP2PAFGameFlowManager::UnregistGameFlowCallbackInterface(TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface) {
    return false;
}

bool UEOSSessionP2PAFGameFlowManager::RequestChangeGameFlow(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

bool UEOSSessionP2PAFGameFlowManager::RegistGameFlowCallbackInterface(TScriptInterface<IEOSSessionP2PAFGameFlowCallbackInterface> _pcIntarface) {
    return false;
}

bool UEOSSessionP2PAFGameFlowManager::QuitGame() {
    return false;
}

bool UEOSSessionP2PAFGameFlowManager::IsPossibleChangeGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

bool UEOSSessionP2PAFGameFlowManager::InitGameFlow() {
    return false;
}

EEOSSessionP2PAFGameFlowStep UEOSSessionP2PAFGameFlowManager::GetGameFlowStep() const {
    return EEOSSessionP2PAFGameFlowStep::None;
}

bool UEOSSessionP2PAFGameFlowManager::ChangedGameFlowStepForAllPlayers(EEOSSessionP2PAFGameFlowStep _enGameFlowStep) {
    return false;
}

UEOSSessionP2PAFGameFlowManager::UEOSSessionP2PAFGameFlowManager() {
}

