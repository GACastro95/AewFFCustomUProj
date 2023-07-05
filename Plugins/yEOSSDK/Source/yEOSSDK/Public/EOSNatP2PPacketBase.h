#pragma once
#include "CoreMinimal.h"
#include "EEOSPacketReliability.h"
#include "EOSNatP2PBinary.h"
#include "EOSNatP2PPacketBase.generated.h"

class UEOSNatP2PCachedTransfer;
class UEOSUserBase;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PPacketBase : public UEOSNatP2PBinary {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserBase* m_pcUserBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSNatP2PCachedTransfer* m_pcCachedTransfer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEOSPacketReliability m_Reliability;
    
public:
    UEOSNatP2PPacketBase();
    UFUNCTION(BlueprintCallable)
    bool SetupByCachedTransfer(UEOSUserBase* _pcUserBase, UEOSNatP2PCachedTransfer* _pcCachedTransfer, EEOSPacketReliability _Reliability);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(UEOSUserBase* _pcUserBase, const FString& _strSocketID, uint8 _uChannel, EEOSPacketReliability _Reliability);
    
    UFUNCTION(BlueprintCallable)
    bool SendAllUser();
    
    UFUNCTION(BlueprintCallable)
    bool Send();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameSocketID(const FString& _strSocketID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNoTarget() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUserBase(UEOSUserBase*& _pcUserBase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSocketID() const;
    
};

