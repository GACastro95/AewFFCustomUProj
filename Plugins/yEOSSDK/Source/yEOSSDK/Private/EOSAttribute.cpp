#include "EOSAttribute.h"

void UEOSAttribute::SetVisibility(EEOSAttrVisibility _enVisibility) {
}

void UEOSAttribute::SetVariableType(EEOSAttrVariableType _enType) {
}

void UEOSAttribute::SetValue(const FString& _strValue) {
}

void UEOSAttribute::SetString(const FString& _strValue) {
}

void UEOSAttribute::SetName(const FString& _strName) {
}

void UEOSAttribute::SetJudgeType(EEOSAttrJudgeType _enType) {
}

void UEOSAttribute::SetInt64(int64 _sValue) {
}

void UEOSAttribute::SetInt32(int32 _sValue) {
}

void UEOSAttribute::SetFloat(float _fValue) {
}

void UEOSAttribute::SetBoolean(bool _bValue) {
}

EEOSAttrVisibility UEOSAttribute::GetVisibility() const {
    return EEOSAttrVisibility::Public;
}

EEOSAttrVariableType UEOSAttribute::GetVariableType() const {
    return EEOSAttrVariableType::Boolean;
}

FString UEOSAttribute::GetValue() const {
    return TEXT("");
}

FString UEOSAttribute::GetString() const {
    return TEXT("");
}

FString UEOSAttribute::GetName() const {
    return TEXT("");
}

EEOSAttrJudgeType UEOSAttribute::GetJudgeType() const {
    return EEOSAttrJudgeType::Equal;
}

int64 UEOSAttribute::GetInt64() const {
    return 0;
}

int32 UEOSAttribute::GetInt32() const {
    return 0;
}

float UEOSAttribute::GetFloat() const {
    return 0.0f;
}

bool UEOSAttribute::GetBoolean() const {
    return false;
}

bool UEOSAttribute::Create(UEOSAttribute*& _pcInst) {
    return false;
}

void UEOSAttribute::CopyFrom(const UEOSAttribute* _pcAttr) {
}

UEOSAttribute::UEOSAttribute() {
    this->m_sInt64 = 0;
    this->m_fFloat = 0.00f;
    this->m_enVariableType = EEOSAttrVariableType::Boolean;
    this->m_enJudgeType = EEOSAttrJudgeType::Equal;
    this->m_enVisibility = EEOSAttrVisibility::Public;
    this->m_bBool = false;
}

