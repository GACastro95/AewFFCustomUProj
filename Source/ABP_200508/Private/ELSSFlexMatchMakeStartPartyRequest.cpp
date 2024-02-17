#include "ELSSFlexMatchMakeStartPartyRequest.h"

void UELSSFlexMatchMakeStartPartyRequest::RequestResult(const int32 responseCode, const FString& responseData, eSSRequestResultType resultType) {
}

UELSSFlexMatchMakeStartPartyRequest* UELSSFlexMatchMakeStartPartyRequest::CreateRequestInstance() {
    return NULL;
}

void UELSSFlexMatchMakeStartPartyRequest::CreateAPI(const FString& buildID, const TArray<FPingData> regionLatencieData, const bool isSinglePlay, int32 singlePlayFixedSecond, const FString& pRegion, const FString& DataID, const int32 GroupId) {
}

UELSSFlexMatchMakeStartPartyRequest::UELSSFlexMatchMakeStartPartyRequest() {
    this->LobbyManager = NULL;
}

