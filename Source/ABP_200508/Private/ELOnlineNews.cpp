#include "ELOnlineNews.h"

void UELOnlineNews::OnDownloadJson(const FString& _Filename, const FString& _Filedata) {
}

void UELOnlineNews::GetOnlineNewDataMap(TMap<FString, UOnlineNewsData*>& _OnlineNewsMap) {
}

void UELOnlineNews::ClearOnlineNewDataMap() {
}

UELOnlineNews::UELOnlineNews() {
    this->TitleStorage = NULL;
}

