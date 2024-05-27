#include "ELSSDataLoadingFlow.h"

AELSSDataLoadingFlow::AELSSDataLoadingFlow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Result = ESSDataLoadingResult::None;
    this->PrevState = ESSDataLoadingFlowState::None;
}







bool AELSSDataLoadingFlow::IsState(ESSDataLoadingFlowState inState) const {
    return false;
}

bool AELSSDataLoadingFlow::IsInitialized() const {
    return false;
}













void AELSSDataLoadingFlow::ChangeState(ESSDataLoadingFlowState inState) {
}


