#include "SSMoveResult.h"

FSSMoveResult::FSSMoveResult() {
    this->response = false;
    this->SendHead = false;
    this->MultiMoved = false;
    this->GoodMove = false;
    this->Timestamp = 0.00f;
    this->MovementBaseActor = NULL;
}

