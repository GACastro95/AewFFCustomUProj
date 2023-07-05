#include "OnlineNewsData.h"

FString UOnlineNewsData::ToJson() {
    return TEXT("");
}

void UOnlineNewsData::SetStartTime(const FString& _time) {
}

void UOnlineNewsData::SetOnlineNewsTexture(UTexture2D* _Image) {
}

void UOnlineNewsData::SetOnlineNewsID(const FString& _id) {
}

void UOnlineNewsData::SetEndTime(const FString& _time) {
}

void UOnlineNewsData::SaveFile(const FString& _Text, const FString& _FilePath) {
}

bool UOnlineNewsData::LoadFile(const FString& _FilePath, FString& _Filedata) {
    return false;
}

FString UOnlineNewsData::GetPublicationStartDate() {
    return TEXT("");
}

FString UOnlineNewsData::GetPublicationEndDate() {
    return TEXT("");
}

int32 UOnlineNewsData::GetOnlineNewsVersion() {
    return 0;
}

UTexture2D* UOnlineNewsData::GetOnlineNewsTexture() {
    return NULL;
}

FString UOnlineNewsData::GetOnlineNewsID() {
    return TEXT("");
}

FString UOnlineNewsData::GetHeaderText() {
    return TEXT("");
}

int32 UOnlineNewsData::GetDisplayPriority() {
    return 0;
}

FString UOnlineNewsData::GetBodyText() {
    return TEXT("");
}

void UOnlineNewsData::FromJson(const FString& _JsonData) {
}

UOnlineNewsData::UOnlineNewsData() {
    this->OnlineNewsTex = NULL;
    this->Version = 0;
    this->DisplayPriority = 0;
}

