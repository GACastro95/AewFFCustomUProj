#include "ELPlayerIndicator.h"

UELPlayerIndicator::UELPlayerIndicator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Indicator = NULL;
    this->TraceChannel = TraceTypeQuery1;
    this->Particle = NULL;
    this->Player = NULL;
}


