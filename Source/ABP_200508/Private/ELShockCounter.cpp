#include "ELShockCounter.h"

UELShockCounter::UELShockCounter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CounterValue_N = 0.00f;
    this->AdditionalDownSecond_N = 0.00f;
    this->RingDownSec_N = 0.00f;
    this->ArenaDownSec_N = 0.00f;
    this->MashBonusSecond_N = 0.00f;
    this->MashBonusTotalSubSec_N = 0.00f;
}

void UELShockCounter::SubCounterValue_N(float Value) {
}

void UELShockCounter::SetCounterValue_N(bool bEx, float Value) {
}

bool UELShockCounter::IsRise_N() const {
    return false;
}

bool UELShockCounter::IsChangeGroggyState_N() const {
    return false;
}

float UELShockCounter::GetShockCounterValue_N() const {
    return 0.0f;
}

void UELShockCounter::ClearRepeatLimit_N() {
}


