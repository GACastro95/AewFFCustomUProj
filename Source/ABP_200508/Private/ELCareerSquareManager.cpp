#include "ELCareerSquareManager.h"

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

AELCareerSquareManager::AELCareerSquareManager() {
    this->m_CurrentPlayerStayCity = ECareerCity::None;
    this->m_NextPlayerStayCity = ECareerCity::None;
}

