#include "CareerStory.h"

FCareerStory::FCareerStory() {
    this->TriggerTiming = ECareerStoryTiming::None;
    this->OperationType = ECareerStoryOperationType::EVENT;
    this->OperationArgInt = 0;
    this->OperationArgWrestlerID = EWrestlerID_N::None;
    this->OperationArgMatchID = ECareerScenarioPart::NONE;
    this->Condition_A = ECareerStoryResultCondition::NONE;
    this->Condition_B = ECareerStoryResultCondition::NONE;
    this->Condition_C = ECareerStoryResultCondition::NONE;
    this->Condition_D = ECareerStoryResultCondition::NONE;
}

