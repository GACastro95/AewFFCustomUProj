#include "ELCareerSquareActor.h"

AELCareerSquareActor::AELCareerSquareActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AELCareerSquareActor::SetSquareData(FCareerSquareData _Param) {
}

FCareerSquareData AELCareerSquareActor::GetSquareData() {
    return FCareerSquareData{};
}

FVector AELCareerSquareActor::GetHeliport() const {
    return FVector{};
}

void AELCareerSquareActor::BroadcastActionFinished() {
}


