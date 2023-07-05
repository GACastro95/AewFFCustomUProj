#include "ELCareerStoryDataActor.h"


void AELCareerStoryDataActor::SetStoryDataTable(TArray<FCareerStory> _Table) {
}

bool AELCareerStoryDataActor::IsLoadStoryData() {
    return false;
}

TArray<FCareerStory> AELCareerStoryDataActor::GetStoryDataTable() {
    return TArray<FCareerStory>();
}

FCareerStory AELCareerStoryDataActor::GetCareerStoryRowData(FName _key) {
    return FCareerStory{};
}

FCareerStory AELCareerStoryDataActor::GetCareerStoryFirstData() {
    return FCareerStory{};
}

UDataTable* AELCareerStoryDataActor::GetCareerStoryDataTableByString(const FString& _AssetPath) {
    return NULL;
}

void AELCareerStoryDataActor::ClearStoryDataTable() {
}

void AELCareerStoryDataActor::AddCareerStoryData(FCareerStory _Data) {
}

AELCareerStoryDataActor::AELCareerStoryDataActor() {
}

