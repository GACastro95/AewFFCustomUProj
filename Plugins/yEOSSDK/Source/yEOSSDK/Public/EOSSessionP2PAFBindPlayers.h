#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PAdditionalFunctionBase.h"
#include "EOSSessionP2PAFBindPlayers.generated.h"

class UEOSSessionP2PMemberInfoPacket;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PAFBindPlayers : public UEOSSessionP2PAdditionalFunctionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSSessionP2PMemberInfoPacket* m_pcMemberInfos;
    
public:
    UEOSSessionP2PAFBindPlayers();

    UFUNCTION(BlueprintCallable)
    bool RetrySendMemberInfo();
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberInfo(UEOSSessionP2PMemberInfoPacket*& _pcMemberInfos);
    
};

