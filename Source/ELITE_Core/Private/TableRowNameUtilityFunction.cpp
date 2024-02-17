#include "TableRowNameUtilityFunction.h"

FTableRowName UTableRowNameUtilityFunction::ToTableRowName(const FName& RowName) {
    return FTableRowName{};
}

FName UTableRowNameUtilityFunction::ToFName(const FTableRowName& TableRowName) {
    return NAME_None;
}

FDataTableRowHandle UTableRowNameUtilityFunction::ToDataTableRowHandle(const FTableRowName& TableRowName) {
    return FDataTableRowHandle{};
}

bool UTableRowNameUtilityFunction::IsEqual_FName(const FTableRowName& TableRowName, const FName& Name) {
    return false;
}

void UTableRowNameUtilityFunction::ConvertToNameSet(const TSet<FTableRowName>& TableRowNameSet, TSet<FName>& NameSet) {
}

UTableRowNameUtilityFunction::UTableRowNameUtilityFunction() {
}

