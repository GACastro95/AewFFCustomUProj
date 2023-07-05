#include "ELUserPrivilegesSubsystem.h"

bool UELUserPrivilegesSubsystem::IsCanUseUserGeneratedContent(APlayerController* _playerController, const bool _showPrivilegeUI) {
    return false;
}

bool UELUserPrivilegesSubsystem::IsCanPlayOnline(APlayerController* _playerController) {
    return false;
}

bool UELUserPrivilegesSubsystem::IsCanCrossPlay(APlayerController* _playerController) {
    return false;
}

bool UELUserPrivilegesSubsystem::IsCanCommunicateXBoxUser(APlayerController* _playerController, const bool _showPrivilegeUI) {
    return false;
}

bool UELUserPrivilegesSubsystem::IsCanCommunicateOutsideXBoxUser(APlayerController* _playerController) {
    return false;
}

UELUserPrivilegesSubsystem::UELUserPrivilegesSubsystem() {
}

