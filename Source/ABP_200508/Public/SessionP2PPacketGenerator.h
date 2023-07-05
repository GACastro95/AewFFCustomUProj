#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketGeneratorBase.h"
#include "SessionP2PPacketGenerator.generated.h"

class USessionP2PPacketGenerator;

UCLASS(Blueprintable)
class ABP_200508_API USessionP2PPacketGenerator : public UEOSSessionP2PPacketGeneratorBase {
    GENERATED_BODY()
public:
    USessionP2PPacketGenerator();
    UFUNCTION(BlueprintCallable)
    static bool CreateSessionP2PPacketGenerator(USessionP2PPacketGenerator*& _pcInstance);
    
};

