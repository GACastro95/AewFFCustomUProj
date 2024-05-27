#include "ELCreateMode_MenuInfoSubsystem.h"

UELCreateMode_MenuInfoSubsystem::UELCreateMode_MenuInfoSubsystem() {
}

void UELCreateMode_MenuInfoSubsystem::SetMainMenuAction(EELMainMenuAction _MainMenuAction) {
}

void UELCreateMode_MenuInfoSubsystem::SetGender(EGender _Gender) {
}

bool UELCreateMode_MenuInfoSubsystem::IsNewData() {
    return false;
}

bool UELCreateMode_MenuInfoSubsystem::IsMaleData() {
    return false;
}

EELMainMenuAction UELCreateMode_MenuInfoSubsystem::GetMainMenuAction() {
    return EELMainMenuAction::None;
}

EGender UELCreateMode_MenuInfoSubsystem::GetGender() {
    return EGender::Male;
}


