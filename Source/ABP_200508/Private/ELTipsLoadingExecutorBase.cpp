#include "ELTipsLoadingExecutorBase.h"

AELTipsLoadingExecutorBase::AELTipsLoadingExecutorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ZOrder_N = 0;
}

void AELTipsLoadingExecutorBase::OnStartLoadingScreen_Implementation(ETipsLoadingCategory _Category, ETipsLoadingCategory _resourceCategory, FTipsLoadingResourceInfo _resourceInfo, bool _isFadeInStart) {
}

void AELTipsLoadingExecutorBase::OnEndLoadingScreen_Implementation() {
}

void AELTipsLoadingExecutorBase::EndLoadingScreen() {
}


