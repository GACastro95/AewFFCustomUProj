#include "ELCareerSquareManager.h"

AELCareerSquareManager::AELCareerSquareManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_CurrentPlayerStayCity = ECareerCity::None;
    this->m_NextPlayerStayCity = ECareerCity::None;
}

void AELCareerSquareManager::SetNextPlayerStayCity(ECareerCity _City) {
}

void AELCareerSquareManager::SetCurrentPlayerStayCity(ECareerCity _City) {
}

void AELCareerSquareManager::SetCareerSquareTable(TArray<AELCareerSquareActor*> Table) {
}

AELCareerSquareActor* AELCareerSquareManager::GetSquareFromCityName(ECareerCity _City) {
    return NULL;
}

ECareerCity AELCareerSquareManager::GetSquareCityFromId(const FString& _SquareId) {
    return ECareerCity::None;
}

ECareerCity AELCareerSquareManager::GetNextPlayerStayCity() {
    return ECareerCity::None;
}

AELCareerSquareActor* AELCareerSquareManager::GetCurrentStaySquare() {
    return NULL;
}

ECareerCity AELCareerSquareManager::GetCurrentPlayerStayCity() {
    return ECareerCity::None;
}

TArray<AELCareerSquareActor*> AELCareerSquareManager::GetCareerSquareTable() {
    return TArray<AELCareerSquareActor*>();
}


