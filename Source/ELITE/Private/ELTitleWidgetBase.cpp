#include "ELTitleWidgetBase.h"

bool UELTitleWidgetBase::StartConvertSaveData() {
    return false;
}

bool UELTitleWidgetBase::PreStartConvertSaveData() {
    return false;
}






void UELTitleWidgetBase::DeleteSaveData() {
}

void UELTitleWidgetBase::CallBack_EndDelete(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}

void UELTitleWidgetBase::CallBack_EndConvert(ESaveDataAccessorEvent Event, USaveData_AccessorBase* SaveDataAccessor, ESaveDataProcResult Result) {
}

UELTitleWidgetBase::UELTitleWidgetBase() {
}

