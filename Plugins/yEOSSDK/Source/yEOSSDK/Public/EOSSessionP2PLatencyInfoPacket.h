#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PLatencyInfoData.h"
#include "EOSSessionP2PSynchronizedPacketBase.h"
#include "EOSSessionP2PLatencyInfoPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PLatencyInfoPacket : public UEOSSessionP2PSynchronizedPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PLatencyInfoPacket();
    UFUNCTION(BlueprintCallable)
    bool Send(int32 _uPacketIndex);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void MergeLatencyInfo(const FString& _strProductUserID, float _fAverage, float _fMin, float _fMax);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTotalLatencyInfoNum();
    
    UFUNCTION(BlueprintCallable)
    bool GetLatencyInfo(FEOSSessionP2PLatencyInfoData& _rstInfoData, int32 _sIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHostPriority(const FString& _strProductUserID) const;
    
    UFUNCTION(BlueprintCallable)
    void AddLatencyInfo(const FString& _strProductUserID, float _fAverage, float _fMin, float _fMax);
    
};

