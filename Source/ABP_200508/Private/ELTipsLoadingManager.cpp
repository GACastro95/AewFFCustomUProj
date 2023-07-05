#include "ELTipsLoadingManager.h"

bool UELTipsLoadingManager::StartScreen(ETipsLoadingCategory _displayCategory, FTipsLoadingCompleteDelegate _completeDelegate, bool _isFadeInStart) {
    return false;
}

void UELTipsLoadingManager::SetOverrideNextLevel(const FName& _nextLevel, const FString& _optionString) {
}

void UELTipsLoadingManager::OnCompleteLoading() {
}

bool UELTipsLoadingManager::GetResourceInfo(ETipsLoadingCategory _displayCategory, int32 _targetIndex, FTipsLoadingResourceInfo& _outResourceInfo) {
    return false;
}

void UELTipsLoadingManager::EndScreen() {
}

bool UELTipsLoadingManager::Debug_StartScreen(ETipsLoadingCategory _displayCategory, int32 _selectTipsIndex, FTipsLoadingCompleteDelegate _completeDelegate) {
    return false;
}

void UELTipsLoadingManager::ClearOverrideNextLevel() {
}

UELTipsLoadingManager::UELTipsLoadingManager() {
    this->UseOverrideNextLevel = false;
    this->m_pLoadingExecuteActor = NULL;
}

