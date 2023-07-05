#include "CareerTutorial.h"

FCareerTutorial::FCareerTutorial() {
    this->DispTiming = ECareerTutorialDispTiming::None;
    this->WeekTiming = ECareerScenarioMatchTiming::PROLOGUE;
    this->WithoutWeekTiming = ECareerScenarioMatchTiming::PROLOGUE;
    this->ScenarioPart = ECareerScenarioPart::NONE;
    this->Wrestler = ECareerTutorialWrestler::CAW;
    this->JudgeType = ECareerTutorialJudgeType::None;
    this->ValueDetail = 0;
    this->CheckList = ECareerTutorialCheckList::WelcomeToRTE;
    this->UniqueID = 0;
}

