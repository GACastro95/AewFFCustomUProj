#include "ELEOSLobbyMiniGame.h"

AELEOSLobbyMiniGame::AELEOSLobbyMiniGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSetup = false;
    this->ELEOSLobby = NULL;
    this->Step = EELEOSLobbyMiniGameSteps::None;
    this->ELEOSLobbyMiniGameInfo = NULL;
}

bool AELEOSLobbyMiniGame::Setup(UEOSUser* InSelf, UELEOSLobby* InELEOSLobby, UELEOSLobbyMiniGameInfo* Info, FOnSetupCompleteEvent OnSetupComplete, FOnMiniGameNotify OnNotify, FOnMiniGameOwnerSelectInfo OnOwnerSelectInfo) {
    return false;
}

bool AELEOSLobbyMiniGame::SendOwnerSelectInfo(int32 InNextCursor, bool InDecide, bool InCancel) {
    return false;
}

void AELEOSLobbyMiniGame::OnReceivePacket(EELEOSLobbyPacketType InPacketType, ULobbyPacketBase* InPacket, UEOSUserBase* InSender) {
}

bool AELEOSLobbyMiniGame::IsSetup() const {
    return false;
}

EELEOSLobbyMiniGameSteps AELEOSLobbyMiniGame::GetNowStep() const {
    return EELEOSLobbyMiniGameSteps::None;
}

UELEOSLobbyMiniGameInfo* AELEOSLobbyMiniGame::GetELEOSLobbyMiniGameInfo() const {
    return NULL;
}

void AELEOSLobbyMiniGame::Dispose() {
}


