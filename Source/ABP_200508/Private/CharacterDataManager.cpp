#include "CharacterDataManager.h"

UCharacterDataManager::UCharacterDataManager() {
    this->bImported = false;
}

void UCharacterDataManager::SortWrestler() {
}

void UCharacterDataManager::Reset() {
}

void UCharacterDataManager::RemoveCustomWrestler(EBasicFunctionResult& Result, const FGuid UID) {
}

void UCharacterDataManager::ReleaseTemporaryWrestlerByUID(const FGuid UID) {
}

void UCharacterDataManager::ReleaseTemporaryWrestler(const UMyWrestlerDataObject* RemoveData) {
}

void UCharacterDataManager::ReleaseTemporaryCharacter(const UMyWrestlerDataObject* RemoveData) {
}

bool UCharacterDataManager::ReleaseMyCharacterByUID(const FGuid Remove) {
    return false;
}

bool UCharacterDataManager::ReleaseMyCharacter(UMyWrestlerDataObject* RemoveData) {
    return false;
}

void UCharacterDataManager::ReleaseCachedImage() {
}

void UCharacterDataManager::OnInitialize() {
}

void UCharacterDataManager::IsValidCharacter(ECharacterValidationResult& Result, const FGuid UID) {
}

void UCharacterDataManager::InitMyRosters() {
}

void UCharacterDataManager::InitDB() {
}

bool UCharacterDataManager::HasSaveDataImported() const {
    return false;
}

EWrestlerID_N UCharacterDataManager::GetWrestlerID(const FGuid UID) {
    return EWrestlerID_N::None;
}

int32 UCharacterDataManager::GetUnlockedCustomWrestlerSlotNum() {
    return 0;
}

void UCharacterDataManager::GetUIDList(TArray<FGuid>& Out, const bool bRoster, const bool bScout, const bool bNPC) {
}

int32 UCharacterDataManager::GetTemporaryCharacterNum() const {
    return 0;
}

int32 UCharacterDataManager::GetScoutNum() const {
    return 0;
}

UMyWrestlerDataObject* UCharacterDataManager::GetScoutDataObject(const int32 Index) {
    return NULL;
}

int32 UCharacterDataManager::GetSaveDataNumMax() {
    return 0;
}

void UCharacterDataManager::GetRosterUID(FGuid& UID, const EWrestlerID_N WrestlerID) {
}

int32 UCharacterDataManager::GetRosterNum() const {
    return 0;
}

void UCharacterDataManager::GetRosterInfoParamBP(FRosterInfoParam& RosterInfoParam, EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID) {
}

void UCharacterDataManager::GetNeedSaveFileIndexList(TArray<int32>& OutList) const {
}

UMyWrestlerDataObject* UCharacterDataManager::GetMyWrestlerDataObjectByEnumBP(EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID, const int32 ScoutNo) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::GetMyWrestlerDataObjectBP(EBasicFunctionResult& Result, const FGuid UID) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::GetMyCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID, const int32 ScoutNo) {
    return NULL;
}

void UCharacterDataManager::GetGuestWrestlerDataObject(UMyWrestlerDataObject*& GuestDataObject, EBasicFunctionResult& Result, const EWrestlerID_N WrestlerID, const bool bFullPreset) {
}

UMyWrestlerDataObject* UCharacterDataManager::GetDefaultCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID, const bool bGuest, const bool bFullPreset) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::GetDefaultCharacterDataObject(const FGuid UID, const bool bGuest, const bool bFullPreset) {
    return NULL;
}

void UCharacterDataManager::GetCustomWrestlerUID(FGuid& UID, const int32 Index) {
}

void UCharacterDataManager::GetCustomWrestlerObjects(TArray<UMyWrestlerDataObject*>& OutRosterList, TArray<UMyWrestlerDataObject*>& OutScoutList) const {
}

int32 UCharacterDataManager::GetCustomWrestlerNum() {
    return 0;
}

void UCharacterDataManager::GetCustomWrestlerList(TArray<UMyWrestlerDataObject*>& OutList, const int32 SaveFileIndex, const bool bRoster) const {
}

bool UCharacterDataManager::GetCharacterParam(const EWrestlerID_N WrestlerID, FRosterInfoParam& Out) {
    return false;
}

UCharacterDataManager* UCharacterDataManager::GetCharacterDataManagerInstance() {
    return NULL;
}

UCharacterDataManager* UCharacterDataManager::GetCharacterDataManager() {
    return NULL;
}

int32 UCharacterDataManager::GetAvailableScoutNum() const {
    return 0;
}

int32 UCharacterDataManager::GetAvailableCustomWrestlerSlotNum() {
    return 0;
}

UMyWrestlerDataObject* UCharacterDataManager::GenerateCharacterDataObjectByEnum(const EWrestlerID_N WrestlerID) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::GenerateCharacterDataObject(const FGuid UID) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::FindMyCharacterDataObject(const FGuid UID) {
    return NULL;
}

void UCharacterDataManager::EntryTemporaryWrestler(UMyWrestlerDataObject* AddData) {
}

void UCharacterDataManager::EntryTemporaryCharacter(UMyWrestlerDataObject* AddData) {
}

bool UCharacterDataManager::EntryMyCharacter(UMyWrestlerDataObject* NewData, bool& bAddedNew) {
    return false;
}

bool UCharacterDataManager::DuplicateScoutWrestler(const UMyWrestlerDataObject* Src, FGuid& NewUID) {
    return false;
}

void UCharacterDataManager::DuplicateCustomWrestler(UMyWrestlerDataObject*& DuplicatedObject, EBasicFunctionResult& Result, const FGuid UID) {
}

UDataTable* UCharacterDataManager::Debug_GetPresetWrestlerTable() {
    return NULL;
}

void UCharacterDataManager::Debug_GetPresetWrestlerList(TArray<FName>& RecordNames) {
}

void UCharacterDataManager::Debug_GetPresetWrestler(FWrestlerSetupParam& Param, const FName RecordName) {
}

UMyWrestlerDataObject* UCharacterDataManager::CreateScoutDataObjectFromTemplate(const TSoftObjectPtr<UTemplateScoutAsset> TemplateAssetPath) {
    return NULL;
}

UMyWrestlerDataObject* UCharacterDataManager::CreateMyWrestlerDataObject(const EGender Gender) {
    return NULL;
}

bool UCharacterDataManager::ClearUpdateFlagForTamperedData(UMyWrestlerDataObject* Target) {
    return false;
}

void UCharacterDataManager::ClearSaveRequests() {
}

bool UCharacterDataManager::CheckCanAddNewScout() {
    return false;
}

bool UCharacterDataManager::AddCustomWrestler(UMyWrestlerDataObject* MyWrestlerObject, bool& bAdded) {
    return false;
}


