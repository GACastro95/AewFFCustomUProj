#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PLatencyCheckPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PLatencyCheckPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PLatencyCheckPacket();

    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    bool MeasureAndIncremnt();
    
    UFUNCTION(BlueprintCallable)
    void Measure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartedMeasure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAverage() const;
    
    UFUNCTION(BlueprintCallable)
    bool CheckTimeout(float _fSeconds);
    
};

