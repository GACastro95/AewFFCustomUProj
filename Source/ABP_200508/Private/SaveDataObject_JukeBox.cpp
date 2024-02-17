#include "SaveDataObject_JukeBox.h"

void USaveDataObject_JukeBox::UpdateSavedataForTmpData(FELTmpJukeboxSaveData _tmpData) {
}

void USaveDataObject_JukeBox::SetUpdated(bool _update) {
}

void USaveDataObject_JukeBox::SetRandomPlayback(bool _random) {
}

void USaveDataObject_JukeBox::SetNextPlayIDForRandom() {
}

void USaveDataObject_JukeBox::SetNextPlayID() {
}

void USaveDataObject_JukeBox::SetJukeBoxSortListForID(int32 _targetId, int32 _sortNo, bool _Enable) {
}

void USaveDataObject_JukeBox::SetJukeBoxPlayedListForID(int32 _targetId, bool _Enable) {
}

void USaveDataObject_JukeBox::SetJukeBoxFilter(EJukeBoxFilterType _filter) {
}

void USaveDataObject_JukeBox::SetJukeBoxCheckListForID(int32 _targetId, bool _Enable) {
}

void USaveDataObject_JukeBox::SetCurrentPlayID(int32 _id) {
}

void USaveDataObject_JukeBox::SetCreateSavedata(bool _create) {
}

bool USaveDataObject_JukeBox::IsRandomPlayback() {
    return false;
}

bool USaveDataObject_JukeBox::IsCreateSavedata() {
    return false;
}

void USaveDataObject_JukeBox::InitJukeBoxSortList() {
}

void USaveDataObject_JukeBox::InitJukeBoxPlayedList() {
}

int32 USaveDataObject_JukeBox::GetNextPlayID() {
    return 0;
}

USoundAtomCue* USaveDataObject_JukeBox::GetNextJukeBoxPlayCue(bool _inGameFlg) {
    return NULL;
}

int32 USaveDataObject_JukeBox::GetJukeBoxSortListForID(int32 _targetId, bool& _findParam) {
    return 0;
}

TArray<int32> USaveDataObject_JukeBox::GetJukeBoxSortList() {
    return TArray<int32>();
}

bool USaveDataObject_JukeBox::GetJukeBoxPlayList(TArray<int32>& _listArray) {
    return false;
}

bool USaveDataObject_JukeBox::GetJukeBoxPlayedListForID(int32 _targetId, bool& _findParam) {
    return false;
}

TArray<int32> USaveDataObject_JukeBox::GetJukeBoxPlayedList() {
    return TArray<int32>();
}

USoundAtomCue* USaveDataObject_JukeBox::GetJukeBoxPlayCue(int32 _targetId, bool _inGameFlg) {
    return NULL;
}

EJukeBoxFilterType USaveDataObject_JukeBox::GetJukeBoxFilter() {
    return EJukeBoxFilterType::All;
}

bool USaveDataObject_JukeBox::GetJukeBoxCheckListForID(int32 _targetId, bool& _findParam) {
    return false;
}

TArray<int32> USaveDataObject_JukeBox::GetJukeBoxCheckList() {
    return TArray<int32>();
}

int32 USaveDataObject_JukeBox::GetCurrentPlayID() const {
    return 0;
}

USoundAtomCue* USaveDataObject_JukeBox::GetCurrentJukeBoxPlayCue() {
    return NULL;
}

USaveDataObject_JukeBox::USaveDataObject_JukeBox() {
}

