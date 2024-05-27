#include "ELSSThrowPrediction.h"

AELSSThrowPrediction::AELSSThrowPrediction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CircleRadius = 100.00f;
    this->UnderCheckHeight = 100.00f;
    this->CircleEffect = NULL;
    this->Type = ESSThrowPredictionType::None;
}

void AELSSThrowPrediction::UpdatePrediction_Native(const FPredictProjectilePathResult& InParam) {
}


void AELSSThrowPrediction::SetRadiusAndUnderCheckHeight(float inRadius, float inHeight) {
}






