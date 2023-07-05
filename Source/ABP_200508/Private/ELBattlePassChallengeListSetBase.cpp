#include "ELBattlePassChallengeListSetBase.h"

int32 UELBattlePassChallengeListSetBase::MovePage(bool IsUp, bool& Moved) {
    return 0;
}

int32 UELBattlePassChallengeListSetBase::MoveCursor(bool IsUp, bool& Moved) {
    return 0;
}



void UELBattlePassChallengeListSetBase::ClearMovedCursorType() {
}

UELBattlePassChallengeListSetBase::UELBattlePassChallengeListSetBase() : UUserWidget(FObjectInitializer::Get()) {
    this->CurrentCursor = 0;
}

