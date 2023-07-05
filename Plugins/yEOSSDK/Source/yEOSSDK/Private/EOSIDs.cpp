#include "EOSIDs.h"

bool UEOSIDs::SetIDsWithInst(UEOSIDs* _pcEOSIDs) {
    return false;
}

bool UEOSIDs::SetIDsWithAuth(UEOSAuth* _pcAuth) {
    return false;
}

bool UEOSIDs::SetIDs(const FString& _strEpicAccountID, const FString& _strLocalAccountID, const FString& _strProductUserID, EEOSUserType _enUserType) {
    return false;
}

EEOSUserType UEOSIDs::GetUserType() const {
    return EEOSUserType::Local;
}

FString UEOSIDs::GetStringOfProductUserID() const {
    return TEXT("");
}

FString UEOSIDs::GetStringOfLocalAccountID() const {
    return TEXT("");
}

FString UEOSIDs::GetStringOfEpicAccountID() const {
    return TEXT("");
}

bool UEOSIDs::GetEOSAuth(UEOSAuth*& _ppAuth) {
    return false;
}

UEOSIDs::UEOSIDs() {
    this->m_pcAuth = NULL;
    this->m_pcRefAuth = NULL;
}

