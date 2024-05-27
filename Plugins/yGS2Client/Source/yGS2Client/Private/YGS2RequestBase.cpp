#include "YGS2RequestBase.h"

UYGS2RequestBase::UYGS2RequestBase() {
}

FString UYGS2RequestBase::YGS2GenIDForDebug(int32 _uLength) {
    return TEXT("");
}

void UYGS2RequestBase::SetYGS2UserAuthKey(const FString& _strUserId, const FString& _strKey, const FString& _strSecret, const FString& _strAuthToken, const FString& _strCustomData) {
}

void UYGS2RequestBase::SetYGS2EOSIDs(const FString& _strEpicAccountID, const FString& _strProductUserID) {
}

bool UYGS2RequestBase::SetYGS2ClientSetupParam(const FYGS2ClientSetupParam& _stParam) {
    return false;
}

void UYGS2RequestBase::SetYGS2AppAuthKey(const FString& _strKey, const FString& _strSecret) {
}

void UYGS2RequestBase::SetUserData(UObject* _pcUserObject) {
}

void UYGS2RequestBase::SetTimeout(float _uTimeOut) {
}

void UYGS2RequestBase::SetSSDebugForceError(bool Flag) {
}

bool UYGS2RequestBase::SetOptionalURLArgument(const FString& _strArgs) {
    return false;
}

void UYGS2RequestBase::SetOption(FString& _rstrURL, EYGS2RequestOptionType _enOption) {
}

void UYGS2RequestBase::SetMaxRetry(int32 _sMaxRetryNum) {
}

void UYGS2RequestBase::SetDisableSession(bool UseDisableSession) {
}

bool UYGS2RequestBase::RequestWithArgs(const TMap<FString, FString>& _rstArguments) {
    return false;
}

bool UYGS2RequestBase::RequestUpdate() {
    return false;
}

bool UYGS2RequestBase::RequestRead() {
    return false;
}

bool UYGS2RequestBase::RequestDelete() {
    return false;
}

bool UYGS2RequestBase::RequestCreate() {
    return false;
}

bool UYGS2RequestBase::Request() {
    return false;
}

void UYGS2RequestBase::RemRef() {
}

bool UYGS2RequestBase::OnEndUpdate() {
    return false;
}

bool UYGS2RequestBase::OnEndRead() {
    return false;
}

bool UYGS2RequestBase::OnEndDelete() {
    return false;
}

bool UYGS2RequestBase::OnEndCreate() {
    return false;
}

bool UYGS2RequestBase::OnBeginUpdate() {
    return false;
}

bool UYGS2RequestBase::OnBeginRead() {
    return false;
}

bool UYGS2RequestBase::OnBeginDelete() {
    return false;
}

bool UYGS2RequestBase::OnBeginCreate() {
    return false;
}

bool UYGS2RequestBase::IsSuccess() {
    return false;
}

bool UYGS2RequestBase::IsRef() {
    return false;
}

bool UYGS2RequestBase::IsEnableClientParam() {
    return false;
}

bool UYGS2RequestBase::IsCanceled() const {
    return false;
}

bool UYGS2RequestBase::IsBusy() {
    return false;
}

bool UYGS2RequestBase::IsAuthorizedUser() const {
    return false;
}

FString UYGS2RequestBase::GetUserID() const {
    return TEXT("");
}

bool UYGS2RequestBase::GetUserData(UObject*& _pcUserObject) {
    return false;
}

void UYGS2RequestBase::GetUrl(FString& _rstrURL, const TMap<FString, FString>& _rstArguments) {
}

EYGS2Api UYGS2RequestBase::GetRequestApi() const {
    return EYGS2Api::None;
}

int32 UYGS2RequestBase::GetListTotalNum() const {
    return 0;
}

EYGS2ErrorType UYGS2RequestBase::GetErrorType() const {
    return EYGS2ErrorType::NoRequest;
}

FString UYGS2RequestBase::GetErrorString() {
    return TEXT("");
}

bool UYGS2RequestBase::CreateYGS2Request(UYGS2RequestBase*& _pcInst, EYGS2Api _enApi) {
    return false;
}

void UYGS2RequestBase::ClearYGS2AuthCache() {
}

void UYGS2RequestBase::AddRef() {
}


