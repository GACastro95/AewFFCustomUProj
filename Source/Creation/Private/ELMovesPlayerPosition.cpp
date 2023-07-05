#include "ELMovesPlayerPosition.h"

AELMovesPlayerPosition::AELMovesPlayerPosition() : APlayerStart(FObjectInitializer::Get()) {
    this->MovesState = EMovesState::State_000;
    this->PlayerIndex = 0;
}

