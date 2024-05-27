#include "InGameMovesPreviewMenu.h"

UInGameMovesPreviewMenu::UInGameMovesPreviewMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UInGameMovesPreviewMenu::SetSelectIndex(int32 _SelectIndex) {
}

bool UInGameMovesPreviewMenu::IsSequentialExecution() {
    return false;
}

void UInGameMovesPreviewMenu::InitializeMenu(const TArray<FString>& _ComboBoxKeys) {
}

int32 UInGameMovesPreviewMenu::GetSelectIndex() {
    return 0;
}

void UInGameMovesPreviewMenu::ChangeSequentialExecution() {
}


