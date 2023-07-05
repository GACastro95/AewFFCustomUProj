#include "ELSSThrowPrediction.h"

void AELSSThrowPrediction::UpdatePrediction_Native(const FPredictProjectilePathResult& InParam) {
}


void AELSSThrowPrediction::SetRadiusAndUnderCheckHeight(float inRadius, float inHeight) {
}





AELSSThrowPrediction::AELSSThrowPrediction() {
    this->CircleRadius = 100.00f;
    this->UnderCheckHeight = 100.00f;
    this->CircleEffect = NULL;
    this->Type = ESSThrowPredictionType::None;
}

