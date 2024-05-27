#include "ELGameplayCoreFunctions.h"
#include "Templates/SubclassOf.h"

UELGameplayCoreFunctions::UELGameplayCoreFunctions() {
}

AGameStateBase* UELGameplayCoreFunctions::GetGameStateAs(const UObject* WorldContextObject, const TSubclassOf<AGameStateBase> Class, EBasicFunctionResult& resultType) {
    return NULL;
}

AGameModeBase* UELGameplayCoreFunctions::GetGameModeAs(const UObject* WorldContextObject, const TSubclassOf<AGameModeBase> Class, EBasicFunctionResult& resultType) {
    return NULL;
}

float UELGameplayCoreFunctions::GetAverageMS() {
    return 0.0f;
}

float UELGameplayCoreFunctions::GetAverageFPS() {
    return 0.0f;
}


