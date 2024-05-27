#include "InGameMovesPreviewManager.h"
#include "InGameMovesPreviewMenu.h"

AInGameMovesPreviewManager::AInGameMovesPreviewManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PreviewMenu = CreateDefaultSubobject<UInGameMovesPreviewMenu>(TEXT("PreviewMenu"));
}

void AInGameMovesPreviewManager::SortMontageKeyArray(TArray<FString>& OutKeys) {
}

void AInGameMovesPreviewManager::SetUpController() {
}








