#include "YDebugMenuCallbackBase.h"

void UYDebugMenuCallbackBase::OnUIValueChanged_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey) {
}


void UYDebugMenuCallbackBase::OnSetupUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey) {
}


void UYDebugMenuCallbackBase::OnResetUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey) {
}


void UYDebugMenuCallbackBase::OnClickUI_Direct(const FYDebugMenuSimpleUIParamBase& UIParam, const FString& RegistKey) {
}


UWorld* UYDebugMenuCallbackBase::GetWorldForBP() const {
    return NULL;
}

FYDebugMenuSimpleUIParamBase UYDebugMenuCallbackBase::GetUIParam() {
    return FYDebugMenuSimpleUIParamBase{};
}

FString UYDebugMenuCallbackBase::GeRegistKey() {
    return TEXT("");
}

bool UYDebugMenuCallbackBase::CreateDebugMenuCallbackInstance(UYDebugMenuCallbackBase*& Instance, const FString& BPPath) {
    return false;
}

UYDebugMenuCallbackBase::UYDebugMenuCallbackBase() {
}

