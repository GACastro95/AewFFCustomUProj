#include "ELSSDataLoadingFlow.h"







bool AELSSDataLoadingFlow::IsState(ESSDataLoadingFlowState inState) const {
    return false;
}

bool AELSSDataLoadingFlow::IsInitialized() const {
    return false;
}













void AELSSDataLoadingFlow::ChangeState(ESSDataLoadingFlowState inState) {
}

AELSSDataLoadingFlow::AELSSDataLoadingFlow() {
    this->Result = ESSDataLoadingResult::None;
    this->PrevState = ESSDataLoadingFlowState::None;
}

