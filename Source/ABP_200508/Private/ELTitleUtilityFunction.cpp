#include "ELTitleUtilityFunction.h"

bool UELTitleUtilityFunction::SortByPriority(TArray<EELBelt>& Out, const TArray<EELBelt>& In, bool PrioritizeTagBelt) {
    return false;
}

bool UELTitleUtilityFunction::SetTitleHolderAtEditWrestler(EELBelt Belt, bool TagMember, FEditPersonParam EditPersonParam) {
    return false;
}

bool UELTitleUtilityFunction::SetTitleHolder_Tag(EELBelt Belt, EWrestlerID_N WrestlerID_0, FGuid UID_0, EWrestlerID_N WrestlerID_1, FGuid UID_1) {
    return false;
}

bool UELTitleUtilityFunction::SetTitleHolder_Single(EELBelt Belt, EWrestlerID_N WrestlerID, FGuid UID) {
    return false;
}

bool UELTitleUtilityFunction::SetTitleHolder(EELBelt Belt, bool TagMember, EWrestlerID_N WrestlerID, FGuid UID) {
    return false;
}

bool UELTitleUtilityFunction::MakeBeltInfoForUpdateTitleHolder_Tag(TArray<FELTitleWrestlerSelectParam>& WinnerWrestlers, TArray<EELBelt>& BeltList, const TArray<FELTitleWrestlerSelectParam>& WrestlerList, int32 WinnerTeamNo) {
    return false;
}

bool UELTitleUtilityFunction::MakeBeltInfoForUpdateTitleHolder(FELTitleWrestlerSelectParam& WinnerWrestler, TArray<EELBelt>& BeltList, TArray<EELBelt>& DefendBeltList, const TArray<FELTitleWrestlerSelectParam>& WrestlerList, int32 WinnerTeamNo) {
    return false;
}

bool UELTitleUtilityFunction::IsValidBelt(EELBelt BeltType) {
    return false;
}

bool UELTitleUtilityFunction::IsSameTitleHolderParam(const FELTitleHolder _paramA, const FELTitleHolder _paramB) {
    return false;
}

TArray<EELBelt> UELTitleUtilityFunction::GetWrestlerAttachedBelts(EWrestlerID_N WrestlerID, FGuid UID, bool PrioritizeTagBelt) {
    return TArray<EELBelt>();
}

TArray<EELBelt> UELTitleUtilityFunction::GetTitleList(EWrestlerID_N WrestlerID, FGuid UID) {
    return TArray<EELBelt>();
}

TArray<FELTitleHolder> UELTitleUtilityFunction::GetTitleHolder(EELBelt Belt) {
    return TArray<FELTitleHolder>();
}

EELBelt UELTitleUtilityFunction::GetHighestPriorityBelt(EWrestlerID_N WrestlerID, FGuid UID, bool PrioritizeTagBelt) {
    return EELBelt::None;
}

TArray<EELBelt> UELTitleUtilityFunction::GetEnableBeltList() {
    return TArray<EELBelt>();
}

FText UELTitleUtilityFunction::GetDisplayTitleHolderText(UObject* _pWorldContextObject, EELBelt BeltType, EELDisplayBeltType DisplayBeltType, EGender Gender, bool ValidNewLine) {
    return FText::GetEmpty();
}

int32 UELTitleUtilityFunction::GetDefendCount(EELBelt TargetBelt) {
    return 0;
}

bool UELTitleUtilityFunction::GetBeltParam(FELBeltParam& BeltParam, EELBelt Belt) {
    return false;
}

void UELTitleUtilityFunction::ExecuteFailSafeTitleHolder(UObject* _pWorldContextObject) {
}

void UELTitleUtilityFunction::DeleteTeam(FGuid TeamUID) {
}

void UELTitleUtilityFunction::DefendTitleHolder(EELBelt TargetBelt) {
}

void UELTitleUtilityFunction::ClearTitleHolder(EELBelt Belt) {
}

void UELTitleUtilityFunction::CheckChangedMyWrestlerEditParam(const FEditPersonParam NewMyWrestlerEditParam, const FEditPersonParam PrevMyWrestlerEditParam) {
}

bool UELTitleUtilityFunction::CanChallengedTheTitleAtEditWrestler(EELBelt Belt, FEditPersonParam EditPersonParam) {
    return false;
}

bool UELTitleUtilityFunction::CanChallengedTheTitle(EELBelt Belt, EWrestlerID_N WrestlerID, FGuid UID) {
    return false;
}

void UELTitleUtilityFunction::BreakupTeam(FGuid TeamUID) {
}

UELTitleUtilityFunction::UELTitleUtilityFunction() {
}

