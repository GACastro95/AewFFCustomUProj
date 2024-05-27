#include "YJIRAAccessor.h"

UYJIRAAccessor::UYJIRAAccessor() {
}

void UYJIRAAccessor::Setup(const FJIRASetupParam& _pstSetupParam) {
}

bool UYJIRAAccessor::RequestUpdateTask(const FJIRATaskParam& _stTaskParam) {
    return false;
}

bool UYJIRAAccessor::RequestSearchTask(const FJIRASearchParam& _stSearch) {
    return false;
}

bool UYJIRAAccessor::RequestGetTask(const FJIRATaskParam& _stTaskParam) {
    return false;
}

bool UYJIRAAccessor::RequestDeleteTask(const FJIRATaskParam& _stTaskParam) {
    return false;
}

bool UYJIRAAccessor::RequestAppendTask(const FJIRATaskParam& _stTaskParam) {
    return false;
}

FString UYJIRAAccessor::GenerateJIRAQueryLanguage(const TArray<FJIRASearchCondition>& _cConditions) {
    return TEXT("");
}

bool UYJIRAAccessor::CreateYJIRAAccessor(UYJIRAAccessor*& _pcInst) {
    return false;
}


