#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "SessionPlayerStateData.generated.h"

UCLASS(Blueprintable)
class USessionPlayerStateData : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    USessionPlayerStateData();

};

