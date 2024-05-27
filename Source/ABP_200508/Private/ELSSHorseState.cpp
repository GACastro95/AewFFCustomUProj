#include "ELSSHorseState.h"

UELSSHorseState::UELSSHorseState() {
    this->IdleAnimSequence = NULL;
    this->MontageDamageL = NULL;
    this->MontageDamageR = NULL;
    this->MontageDamageB = NULL;
}

bool UELSSHorseState::IsPlayingDamageMontage() const {
    return false;
}


