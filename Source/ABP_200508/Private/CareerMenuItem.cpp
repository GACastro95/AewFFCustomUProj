#include "CareerMenuItem.h"

FCareerMenuItem::FCareerMenuItem() {
    this->MenuAction = ECareerMenuAction::None;
    this->NextPage = ECareerMenuPage::None;
    this->UseParam = false;
    this->Energy_GreatSuccess = 0;
    this->Energy_Success = 0;
    this->Energy_Failed = 0;
    this->Motivation_GreatSuccess = 0;
    this->Motivation_Success = 0;
    this->Motivation_Failed = 0;
    this->SkillPoint_GreatSuccess = 0;
    this->SkillPoint_Success = 0;
    this->SkillPoint_Failed = 0;
    this->CareerMoney_GreatSuccess = 0;
    this->CareerMoney_Success = 0;
    this->CareerMoney_Failed = 0;
    this->SuccessRate_A = 0;
    this->SuccessRate_B = 0;
    this->SuccessRate_C = 0;
    this->SuccessRate_D = 0;
    this->SuccessRate_E = 0;
    this->SuccessRate_F = 0;
}

