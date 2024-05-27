#include "ELCustomSearchBase.h"

UELCustomSearchBase::UELCustomSearchBase() {
    this->m_pMenuTable = NULL;
    this->m_pObj = NULL;
    this->m_eMenuState = EELCustomSearchMenuState::SearchSelect;
}

void UELCustomSearchBase::InitializeTable_Implementation() {
}


