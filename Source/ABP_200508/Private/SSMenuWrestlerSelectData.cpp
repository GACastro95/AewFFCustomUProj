#include "SSMenuWrestlerSelectData.h"

void USSMenuWrestlerSelectData::SetSelectWrestlerParam(const EWrestlerID_N selectWrestlerId, const int32 EditWrestlerID) {
}

void USSMenuWrestlerSelectData::SetSelectWrestlerPanelId(const int32 ID) {
}

void USSMenuWrestlerSelectData::SetSelectWrestlerId(const int32 ID) {
}

void USSMenuWrestlerSelectData::SetSelectEditWrestlerType(const ESSWrestlerType ID) {
}

void USSMenuWrestlerSelectData::SetSelectEditWrestlerPresetId(const int32 ID) {
}

void USSMenuWrestlerSelectData::Reset() {
}

bool USSMenuWrestlerSelectData::IsCustomWrestler() {
    return false;
}

FSSWrestlerParam USSMenuWrestlerSelectData::GetWrestlerParam() {
    return FSSWrestlerParam{};
}

EWrestlerID_N USSMenuWrestlerSelectData::GetSelectWrestlerTypeId() {
    return EWrestlerID_N::None;
}

int32 USSMenuWrestlerSelectData::GetSelectWrestlerPanelId() {
    return 0;
}

int32 USSMenuWrestlerSelectData::GetSelectWrestlerID() {
    return 0;
}

ESSWrestlerType USSMenuWrestlerSelectData::GetSelectEditWrestlerType() {
    return ESSWrestlerType::None;
}

int32 USSMenuWrestlerSelectData::GetSelectEditWrestlerPresetID() {
    return 0;
}

int32 USSMenuWrestlerSelectData::GetSelectCustomWrestlerId() {
    return 0;
}

USSMenuWrestlerSelectData::USSMenuWrestlerSelectData() {
}

