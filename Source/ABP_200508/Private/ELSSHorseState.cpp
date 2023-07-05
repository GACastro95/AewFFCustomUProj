#include "ELSSHorseState.h"

bool UELSSHorseState::IsPlayingDamageMontage() const {
    return false;
}

UELSSHorseState::UELSSHorseState() {
    this->IdleAnimSequence = NULL;
    this->MontageDamageL = NULL;
    this->MontageDamageR = NULL;
    this->MontageDamageB = NULL;
}

