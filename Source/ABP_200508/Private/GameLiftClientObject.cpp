#include "GameLiftClientObject.h"

UGameLiftClientObject::UGameLiftClientObject() {
}

void UGameLiftClientObject::SetUniquePlayerId(const FString& uniqId) {
}

bool UGameLiftClientObject::IsLocalTest() const {
    return false;
}

UGameLiftClientObject* UGameLiftClientObject::CreateGameLiftObject(const FString& AccessKey, const FString& Secret, const FString& Region, bool bUsingGameLiftLocal, int32 LocalPort) {
    return NULL;
}


