#include "ELSSLocator_FgfGoal.h"
#include "ESSLocatorType.h"

AELSSLocator_FgfGoal::AELSSLocator_FgfGoal(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = ESSLocatorType::FgfGoal;
    this->FgfGoalLocatorId = 0;
}


