#include "MovesSituationUtility.h"

UMovesSituationUtility::UMovesSituationUtility() {
}

void UMovesSituationUtility::SearchDataArray_DataTable(TArray<FMovesSituation>& OutKeys, UDataTable* inSituationTable, UDataTable* inTable) {
}

void UMovesSituationUtility::SaveMovesSituationData(UDataTable* UpdateTable, const FMovesSituation& _MovesSituation, const FName& RowName) {
}

void UMovesSituationUtility::OutPutDataArray(TArray<FMovesOutputData>& OutputData) {
}

bool UMovesSituationUtility::IsMovesTagArray(const TArray<bool>& _OutMovesTagArray, EMovesTag_MovesIndex _MovesIndex) {
    return false;
}

bool UMovesSituationUtility::IsFunctionTagArray(const TArray<bool>& _OutFunctionTagArray, EMovesTag_FunctionIndex _FunctionIndex) {
    return false;
}

bool UMovesSituationUtility::IsDamagePartTagArray(const TArray<bool>& _OutDamagePartTagArray, EMovesTag_DamagePartIndex _DamagePartIndex) {
    return false;
}

bool UMovesSituationUtility::IsAttackTagArray(const TArray<bool>& _OutAttackTagArray, EMovesTag_AttackIndex _AttackIndex) {
    return false;
}

void UMovesSituationUtility::GetSituationMovesName(FString& outName, EMovesDataTable_Type TableType, int32 DT_ID) {
}

void UMovesSituationUtility::GetMovesTagArray(TArray<bool>& _OutMovesTagArray, const FMovesSituation& _MovesSituation) {
}

void UMovesSituationUtility::GetFunctionTagArray(TArray<bool>& _OutFunctionTagArray, const FMovesSituation& _MovesSituation) {
}

void UMovesSituationUtility::GetEnableFinisherList(TMap<FELMoves_Finisher_Part, FMovesSituation>& _outList, const TMap<FELMoves_Finisher_Part, FMovesSituation>& _BaseList, const FELMoves_Finisher& FinisherData, const FELMoves_Finisher_Part& CurrentFinisher) {
}

void UMovesSituationUtility::GetDamagePartTagArray(TArray<bool>& _OutDamagePartTagArray, const FMovesSituation& _MovesSituation) {
}

void UMovesSituationUtility::GetAttackTagArray(TArray<bool>& _OutAttackTagArray, const FMovesSituation& _MovesSituation) {
}

void UMovesSituationUtility::FindSituationDataName(int32& OutIndex, const UDataTable* UpdateTable, int32 DT_ID) {
}


