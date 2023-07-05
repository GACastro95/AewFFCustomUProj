#include "InGameMovesPreviewManager.h"
#include "InGameMovesPreviewMenu.h"

void AInGameMovesPreviewManager::SortMontageKeyArray(TArray<FString>& OutKeys) {
}

void AInGameMovesPreviewManager::SetUpController() {
}







AInGameMovesPreviewManager::AInGameMovesPreviewManager() {
    this->PreviewMenu = CreateDefaultSubobject<UInGameMovesPreviewMenu>(TEXT("PreviewMenu"));
}

