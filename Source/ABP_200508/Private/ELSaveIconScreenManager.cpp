#include "ELSaveIconScreenManager.h"

bool UELSaveIconScreenManager::IsRunningIconScreen() const {
    return false;
}

UELSaveIconScreenManager::UELSaveIconScreenManager() {
    this->m_ScreenExecutor = NULL;
    this->m_ShowMinimumTimer = -1;
    this->m_RunningIconScreen = false;
}

