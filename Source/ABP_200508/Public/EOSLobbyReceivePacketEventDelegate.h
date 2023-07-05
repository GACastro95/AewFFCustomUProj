#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyPacketType.h"
#include "EOSLobbyReceivePacketEventDelegate.generated.h"

class UEOSUserBase;
class ULobbyPacketBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSLobbyReceivePacketEvent, EELEOSLobbyPacketType, _PacketType, ULobbyPacketBase*, _Packet, UEOSUserBase*, _UserBase);

