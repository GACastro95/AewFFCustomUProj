#include "ELEOSDebugGameSession.h"

AELEOSDebugGameSession::AELEOSDebugGameSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSetup = false;
    this->bShow = false;
    this->ELEOSGameSession = NULL;
    this->SessionStatus = ESessionStatus::STATUS_IDLE;
    this->SessionLeftTime = 0.00f;
}

void AELEOSDebugGameSession::OnSessionSearchStartEvent() {
}

void AELEOSDebugGameSession::OnSessionSearchEnd(FELEOSSessionSearchResultWrapper InResults) {
}

void AELEOSDebugGameSession::OnSessionSearchCancelEvent() {
}

void AELEOSDebugGameSession::OnSessionLeaveEvent(UEOSCommunityInfoBase* InCommunityInfo, UEOSCommunityUserBase* InUser) {
}

void AELEOSDebugGameSession::OnSessionJoinEvent(UEOSCommunityUserBase* InUser) {
}

void AELEOSDebugGameSession::OnSessionDestroyEvent() {
}

void AELEOSDebugGameSession::OnSessionCreateEvent() {
}


