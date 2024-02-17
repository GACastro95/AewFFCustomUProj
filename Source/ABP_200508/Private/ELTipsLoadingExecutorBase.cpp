#include "ELTipsLoadingExecutorBase.h"

void AELTipsLoadingExecutorBase::OnStartLoadingScreen_Implementation(ETipsLoadingCategory _Category, ETipsLoadingCategory _resourceCategory, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart) {
}

void AELTipsLoadingExecutorBase::OnEndLoadingScreen_Implementation() {
}

void AELTipsLoadingExecutorBase::EndLoadingScreen() {
}

AELTipsLoadingExecutorBase::AELTipsLoadingExecutorBase() {
    this->ZOrder_N = 0;
}

