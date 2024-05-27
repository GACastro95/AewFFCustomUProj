#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PPacketBase.h"
#include "EOSNatP2PContentPacket.generated.h"

class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSNatP2PContentPacket;
class UEOSUserBase;
class UEOSUserContentBinary;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PContentPacket : public UEOSNatP2PPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserContentBinary* m_pcBinary;
    
public:
    UEOSNatP2PContentPacket();

    UFUNCTION(BlueprintCallable)
    bool SetContentBinary(UEOSUserContentBinary* _pcContent);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateUserContentBinary(UEOSUserContentBinary*& _pcContent, UEOSNatP2PBinary* _pcBinary);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateContentPacketWithUserAndNatP2PCachedTransfer(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateContentPacketWithNatP2PCachedTransfer(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSNatP2PCachedTransfer* _pcCachedTransfer);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateContentPacket(UEOSNatP2PContentPacket*& _pcContentPacket, UEOSUserContentBinary* _pcContent);
    
};

