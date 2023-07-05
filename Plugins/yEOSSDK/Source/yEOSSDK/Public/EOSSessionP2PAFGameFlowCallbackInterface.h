#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EEOSSessionP2PAFGameFlowStep.h"
#include "EOSSessionP2PAFGameFlowCallbackInterface.generated.h"

class UEOSSessionInfo;
class UEOSSessionP2PPacketBase;
class UEOSSessionUser;

UINTERFACE(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAFGameFlowCallbackInterface : public UInterface {
    GENERATED_BODY()
};

class YEOSSDK_API IEOSSessionP2PAFGameFlowCallbackInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnUserQuitGame(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnUserJoinInGame(UEOSSessionUser* SessionUser, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnResultForPossibleToChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnResultForChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, bool Result, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnReceivedSessionPacket(UEOSSessionP2PPacketBase* PacketBase, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    uint8 OnChangedGameFlowForAllPlayers(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsPossibleToChangeGameFlow(EEOSSessionP2PAFGameFlowStep GameFlowStep, UEOSSessionInfo* SessionInfo);
    
};

