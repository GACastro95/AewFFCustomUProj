#include "GameSingleton.h"

UGameSingleton::UGameSingleton() {
    this->bTickableWhenPaused = false;
    this->bTickableInEditor = false;
}





UWorld* UGameSingleton::GetWorldForBP() const {
    return NULL;
}

bool UGameSingleton::GetSingletonInstance(UGameSingleton*& Instance, const FString& BPPath, bool Create) {
    return false;
}

bool UGameSingleton::DeleteSingletonInstance(const FString& BPPath) {
    return false;
}

bool UGameSingleton::CreateSingletonInstance(UGameSingleton*& Instance, const FString& BPPath) {
    return false;
}


