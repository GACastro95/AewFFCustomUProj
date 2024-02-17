#include "WrestlerDataObjectBase.h"

void UWrestlerDataObjectBase::SwitchGender(EGender& resultType) const {
}

void UWrestlerDataObjectBase::SetWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType, const bool bNewFlag) {
}

void UWrestlerDataObjectBase::SaveRequest() {
}

void UWrestlerDataObjectBase::RemoveWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType) {
}

bool UWrestlerDataObjectBase::IsUsingCreateTeam() const {
    return false;
}

bool UWrestlerDataObjectBase::IsUsingCareer() const {
    return false;
}

bool UWrestlerDataObjectBase::IsScoutWrestler() const {
    return false;
}

bool UWrestlerDataObjectBase::IsSaveTarget() const {
    return false;
}

bool UWrestlerDataObjectBase::IsRoster() const {
    return false;
}

bool UWrestlerDataObjectBase::IsReady() const {
    return false;
}

bool UWrestlerDataObjectBase::IsModify() const {
    return false;
}

bool UWrestlerDataObjectBase::IsMale() const {
    return false;
}

bool UWrestlerDataObjectBase::IsLocked() const {
    return false;
}

bool UWrestlerDataObjectBase::IsFemale() const {
    return false;
}

bool UWrestlerDataObjectBase::IsEditable() const {
    return false;
}

bool UWrestlerDataObjectBase::IsDisable() const {
    return false;
}

bool UWrestlerDataObjectBase::IsCommunityWrestler() const {
    return false;
}

bool UWrestlerDataObjectBase::HasWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType) const {
    return false;
}

EWrestlerID_N UWrestlerDataObjectBase::GetWrestlerID() const {
    return EWrestlerID_N::None;
}

FGuid UWrestlerDataObjectBase::GetUID() const {
    return FGuid{};
}

EGender UWrestlerDataObjectBase::GetGender() const {
    return EGender::Male;
}

FDateTime UWrestlerDataObjectBase::GetCreateDate() const {
    return FDateTime{};
}

void UWrestlerDataObjectBase::ClearAllWrestlerDataFlag() {
}

void UWrestlerDataObjectBase::CheckModify() {
}

void UWrestlerDataObjectBase::CancelSaveRequest() {
}

void UWrestlerDataObjectBase::AddWrestlerDataFlag(const EWrestlerDataObjectFlag FlagType) {
}

UWrestlerDataObjectBase::UWrestlerDataObjectBase() {
    this->StatusFlags = 0;
}

