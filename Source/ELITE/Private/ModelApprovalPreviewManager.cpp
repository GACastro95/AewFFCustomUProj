#include "ModelApprovalPreviewManager.h"

AModelApprovalPreviewManager::AModelApprovalPreviewManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewMenu = NULL;
    this->MailMenu = NULL;
    this->m_sCharacterMax = 1;
    this->m_fWrestlerIntervalMin = 35.00f;
    this->m_fWrestlerIntervalMax = 200.00f;
}

void AModelApprovalPreviewManager::ToggleShowMenu(EnPreviewMenu eMenu) {
}

void AModelApprovalPreviewManager::SetWrestlerInterval(float Interval) {
}

void AModelApprovalPreviewManager::SetupWrestlerList(TArray<FWrestlerIDInfo> List) {
}




void AModelApprovalPreviewManager::SetAnimMontageToCharacters(UAnimMontage* Montage) {
}


void AModelApprovalPreviewManager::RevertToDefaultNotificatins(bool IsEnable) {
}

void AModelApprovalPreviewManager::PreChangeWrestler(int32 WrestlerID, int32 WrestlerIndex, int32 CostumeNo, bool bEntCostume) {
}

float AModelApprovalPreviewManager::GetWrestlerIntervalMin() const {
    return 0.0f;
}

float AModelApprovalPreviewManager::GetWrestlerIntervalMax() const {
    return 0.0f;
}

EnVisualizeMode AModelApprovalPreviewManager::GetVisualizeMode() const {
    return EnVisualizeMode::All;
}

TArray<ACharacter*> AModelApprovalPreviewManager::GetPreviewCharacterList() const {
    return TArray<ACharacter*>();
}

int32 AModelApprovalPreviewManager::FindAvailableNumberByFile(const FString& Directory, const FString& Ext) {
    return 0;
}

void AModelApprovalPreviewManager::DisplayInputMode() const {
}

void AModelApprovalPreviewManager::DeleteDirectryFiles(const FString& Directory, const FString& Ext) {
}


void AModelApprovalPreviewManager::ChangeVisualizeMode() {
}

void AModelApprovalPreviewManager::ChangeVisibleSwitchingObject() {
}

void AModelApprovalPreviewManager::ChangeViewWireframe() {
}

void AModelApprovalPreviewManager::ChangeLight() {
}

void AModelApprovalPreviewManager::ChangeDrawWrestlerNum() {
}

void AModelApprovalPreviewManager::ChangeCameraTarget(bool bForce) {
}

void AModelApprovalPreviewManager::ChangeBox() {
}

void AModelApprovalPreviewManager::AdjustWrestlerInterval(bool Increase) {
}


