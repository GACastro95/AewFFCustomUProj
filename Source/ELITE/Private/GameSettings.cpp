#include "GameSettings.h"

UGameSettings::UGameSettings() {
    this->ValidShippingSSmode = true;
}

bool UGameSettings::IsValidSSmode() {
    return false;
}

void UGameSettings::InitExtendedSaveGameInfoDelegate() {
}

bool UGameSettings::GetSaveTitleNameFromFilenName(const FString& SaveFileName, FString& Value) {
    return false;
}

void UGameSettings::GetSaveDataAccessParams(TArray<FSaveDataAccessParam>& Out) {
}

void UGameSettings::GetAdjustDlcSaveDataAccessParams(TArray<FAdjustDlcSaveDataParam>& Out) {
}


