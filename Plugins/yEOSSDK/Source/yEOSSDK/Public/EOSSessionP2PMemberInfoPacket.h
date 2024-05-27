#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PMemberInfoData.h"
#include "EOSSessionP2PSynchronizedPacketBase.h"
#include "EOSSessionP2PMemberInfoPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PMemberInfoPacket : public UEOSSessionP2PSynchronizedPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PMemberInfoPacket();

    UFUNCTION(BlueprintCallable)
    bool UpdateMember(int32 _sIndex, int32 _sMemberIndex, const FString& _strProductUserID, bool _bRemvoed, bool _bDisconnected);
    
    UFUNCTION(BlueprintCallable)
    bool Send();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetTotalMemberNum() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMemberInfoData(FEOSSessionP2PMemberInfoData& _stMemberData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable)
    int32 FindMember(const FString& _strProductUserID);
    
    UFUNCTION(BlueprintCallable)
    bool AddMember(int32 _sMemberIndex, const FString& _strProductUserID, bool _bRemvoed, bool _bDisconnected);
    
};

