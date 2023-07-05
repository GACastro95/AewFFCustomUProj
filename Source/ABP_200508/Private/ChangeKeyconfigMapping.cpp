#include "ChangeKeyconfigMapping.h"

void UChangeKeyconfigMapping::ReleaseAxisMapping(APlayerController* _TargetPlayerController, const FName& NowActionName) {
}

void UChangeKeyconfigMapping::ReleaseActionMapping(APlayerController* _TargetPlayerController, const FName& NowActionName) {
}

EKeyConfig_KeyType_C UChangeKeyconfigMapping::GetKeyType(const FKey& _key) {
    return EKeyConfig_KeyType_C::LSTick;
}

FKey UChangeKeyconfigMapping::GetActionKey(EKeyConfig_KeyType_C _KeyType) {
    return FKey{};
}

void UChangeKeyconfigMapping::AddAxisMapping(APlayerController* _TargetPlayerController, const FName& NowActionName, const FKey& NewKey, float NewScale) {
}

void UChangeKeyconfigMapping::AddActionMapping(APlayerController* _TargetPlayerController, const FName& NowActionName, const FKey& NewKey) {
}

UChangeKeyconfigMapping::UChangeKeyconfigMapping() {
}

