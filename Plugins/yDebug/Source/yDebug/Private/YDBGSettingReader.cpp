#include "YDBGSettingReader.h"

bool UYDBGSettingReader::SetValue(const float _fValue, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::SetString(const FString& _strValue, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::SetActive(bool _bActive, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::Load(const FString& _strFileName) {
    return false;
}

bool UYDBGSettingReader::IsActive(const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::GetString(FString& _rstrValue, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::GetInt(int32& _rsValue, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::GetFloat(float& _rfValue, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::GetComment(FString& _rstrComment, const FString& _strKey) {
    return false;
}

bool UYDBGSettingReader::GetBool(bool& _rbValue, const FString& _strKey) {
    return false;
}

TMap<FString, FDBGSettingDATA> UYDBGSettingReader::GetAllItemList() const {
    return TMap<FString, FDBGSettingDATA>();
}

bool UYDBGSettingReader::CreateYDBGSettingReader(UYDBGSettingReader*& _pcInst) {
    return false;
}

UYDBGSettingReader::UYDBGSettingReader() {
}

