#include "SSPrepareMovieStack.h"

FSSPrepareMovieStack::FSSPrepareMovieStack() {
    this->stackMovieWidget = NULL;
    this->stackSlotId = 0;
    this->stackAutoPlay = false;
    this->stackPlayLength = 0.00f;
    this->stackPlayTotalLength = 0.00f;
    this->stackPlayDelayType = EPlayMovieDelayTimeType::EPlayMovieDelayTimeType_Total;
}

