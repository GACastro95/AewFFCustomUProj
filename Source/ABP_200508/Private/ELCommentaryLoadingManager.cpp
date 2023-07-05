#include "ELCommentaryLoadingManager.h"

bool UELCommentaryLoadingManager::StartScreen(FCommentaryLoadingCompleteDelegate _completeDelegate, int32 BaseZOrder) {
    return false;
}

void UELCommentaryLoadingManager::SetReserveFightWrestlerIDs(TArray<EWrestlerID_N> _targetWrestlerIDs) {
}

void UELCommentaryLoadingManager::OnCompleteLoading() {
}

void UELCommentaryLoadingManager::EndScreen() {
}

bool UELCommentaryLoadingManager::Debug_StartSelectedScreen(FCommentaryLoadingCompleteDelegate _completeDelegate, int32 _targetIndex) {
    return false;
}

UELCommentaryLoadingManager::UELCommentaryLoadingManager() {
    this->m_pLoadingExecuteActor = NULL;
}

