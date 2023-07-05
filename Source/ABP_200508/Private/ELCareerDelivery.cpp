#include "ELCareerDelivery.h"

void UELCareerDelivery::SetPersonalityType(EPersonalityType EPersonalityType) {
}

void UELCareerDelivery::SetOtherMenu(ECareerOtherMenu eOtherMenu, ECareerOtherMenuExit eOtherMenuExit) {
}

void UELCareerDelivery::SetDecisionWrestlerID(EWrestlerID_N eWrestlerID) {
}

void UELCareerDelivery::SetDecisionWrestlerGUID(FGuid Guid) {
}

void UELCareerDelivery::SetDecisionVegetarian(bool bFlag) {
}

void UELCareerDelivery::SetDecisionSubtitles(bool bFlag) {
}

void UELCareerDelivery::SetDecisionPresetNo(int32 No) {
}

void UELCareerDelivery::SetDecisionDispTutorialDialog(bool bFlag) {
}

void UELCareerDelivery::SetDecisionDifficulty(ECareerModeDifficulty eDifficulty) {
}

void UELCareerDelivery::SetCareerStartInfo(ECareerStartInfo eStartInfo) {
}

void UELCareerDelivery::Init() {
}

EPersonalityType UELCareerDelivery::GetPersonalityType() {
    return EPersonalityType::Hero;
}

ECareerOtherMenuExit UELCareerDelivery::GetOtherMenuExit() const {
    return ECareerOtherMenuExit::None;
}

ECareerOtherMenu UELCareerDelivery::GetOtherMenu() const {
    return ECareerOtherMenu::None;
}

EWrestlerID_N UELCareerDelivery::GetDecisionWrestlerID() {
    return EWrestlerID_N::None;
}

FGuid UELCareerDelivery::GetDecisionWrestlerGUID() {
    return FGuid{};
}

bool UELCareerDelivery::GetDecisionVegetarian() {
    return false;
}

bool UELCareerDelivery::GetDecisionSubtitles() {
    return false;
}

int32 UELCareerDelivery::GetDecisionPresetNo() {
    return 0;
}

bool UELCareerDelivery::GetDecisionDispTutorialDialog() {
    return false;
}

ECareerModeDifficulty UELCareerDelivery::GetDecisionDifficulty() {
    return ECareerModeDifficulty::Easy;
}

ECareerStartInfo UELCareerDelivery::GetCareerStartInfo() {
    return ECareerStartInfo::Career_Start_NotSet;
}

UELCareerDelivery::UELCareerDelivery() {
}

