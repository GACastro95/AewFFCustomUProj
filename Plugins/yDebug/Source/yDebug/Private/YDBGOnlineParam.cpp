#include "YDBGOnlineParam.h"

UYDBGOnlineParam::UYDBGOnlineParam() {
}

bool UYDBGOnlineParam::Setup(const FString& _strSettingFileName) {
    return false;
}

bool UYDBGOnlineParam::IsEnableShowDebugInfo() const {
    return false;
}

bool UYDBGOnlineParam::IsEnableLog() const {
    return false;
}

bool UYDBGOnlineParam::IsEnableAutoLogin() const {
    return false;
}

int32 UYDBGOnlineParam::GetWorldType() const {
    return 0;
}

int32 UYDBGOnlineParam::GetTickBudgetInMilliseconds() const {
    return 0;
}

int32 UYDBGOnlineParam::GetShowDebugDefaultNo() const {
    return 0;
}

int32 UYDBGOnlineParam::GetInstanceID() const {
    return 0;
}

int32 UYDBGOnlineParam::GetDebugID() const {
    return 0;
}

FString UYDBGOnlineParam::GetAuthUser(int32 _sIndex) const {
    return TEXT("");
}

FString UYDBGOnlineParam::GetAuthServer() const {
    return TEXT("");
}

bool UYDBGOnlineParam::CreateYDBGOnlineParamerter(UYDBGOnlineParam*& _pcInst, UObject* WorldContextObject) {
    return false;
}


