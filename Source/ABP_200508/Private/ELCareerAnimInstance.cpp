#include "ELCareerAnimInstance.h"

void UELCareerAnimInstance::UpdateVariables(float fDeltaTime) {
}

void UELCareerAnimInstance::ResetAnimBlend(UAnimMontage* _Montage, bool _bInterrupted) {
}

void UELCareerAnimInstance::RequestTalkAnimation(const FString& Name, bool bForceChange) {
}

void UELCareerAnimInstance::RequestNoBlendAnimation(bool bNoBlend) {
}

void UELCareerAnimInstance::RequestFacialAnimation(const FString& Name, bool bForceChange) {
}

void UELCareerAnimInstance::RequestEventAnimation(const FString& Name, bool bForceChange) {
}

bool UELCareerAnimInstance::IsEnableLookAt() {
    return false;
}

bool UELCareerAnimInstance::IsCutScene() {
    return false;
}

void UELCareerAnimInstance::InitializeVariables() {
}

FVector UELCareerAnimInstance::GetLookAtTargetLocation() {
    return FVector{};
}

float UELCareerAnimInstance::GetLookAtFaceAngleV() {
    return 0.0f;
}

FVector UELCareerAnimInstance::GetLookAtEyeTargetVector() {
    return FVector{};
}

float UELCareerAnimInstance::GetLookAtEyeAngleH() {
    return 0.0f;
}

float UELCareerAnimInstance::GetLookAtAlpha() {
    return 0.0f;
}

UELCareerAnimInstance::UELCareerAnimInstance() {
    this->m_strCurrentFacialAnimation = TEXT("None");
    this->m_strRequestFacialAnimation = TEXT("None");
    this->m_strCurrentTalkAnimation = TEXT("NoMove");
    this->m_strRequestTalkAnimation = TEXT("NoMove");
    this->m_strCurrentMenuAnimation = TEXT("Idle_Lv1");
    this->m_strRequestMenuAnimation = TEXT("Idle_Lv1");
    this->m_strCurrentEventAnimation = TEXT("NONE");
    this->m_strRequestEventAnimation = TEXT("NONE");
    this->m_pTargetActor = NULL;
}

