#include "ELMovesPlayerPosition.h"

AELMovesPlayerPosition::AELMovesPlayerPosition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovesState = EMovesState::State_000;
    this->PlayerIndex = 0;
}


