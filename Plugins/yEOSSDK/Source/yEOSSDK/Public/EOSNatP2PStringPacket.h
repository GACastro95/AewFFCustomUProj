#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PPacketBase.h"
#include "EOSNatP2PStringPacket.generated.h"

class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PStringPacket;
class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PStringPacket : public UEOSNatP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSNatP2PStringPacket();

    UFUNCTION(BlueprintCallable)
    bool SetString(const FString& _strText);
    
    UFUNCTION(BlueprintCallable)
    static FString GetStringFromP2PBinary(UEOSNatP2PBinary* _pcBinary);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateStringPacketWithUserAndNatP2PCachedTransfer(UEOSNatP2PStringPacket*& _pcStringPacket, UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateStringPacketWithNatP2PCachedTransfer(UEOSNatP2PStringPacket*& _pcStringPacket, UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateStringPacket(UEOSNatP2PStringPacket*& _pcStringPacket, const FString& _strText);
    
};

