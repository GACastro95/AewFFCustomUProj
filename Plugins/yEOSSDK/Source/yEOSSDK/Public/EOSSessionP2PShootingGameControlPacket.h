#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EOSSessionP2PPacketBase.h"
#include "EOSSessionP2PShootingGameControlData.h"
#include "EOSSessionP2PShootingGameControlPacket.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSSessionP2PShootingGameControlPacket : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
    UEOSSessionP2PShootingGameControlPacket();

    UFUNCTION(BlueprintCallable)
    void SetTransform(FTransform _stTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetTime(int32 _sGameFrame);
    
    UFUNCTION(BlueprintCallable)
    void SetControlValue(int32 _sControlType, float _fValue);
    
    UFUNCTION(BlueprintCallable)
    void SetControlBits(int32 _sControlBits);
    
    UFUNCTION(BlueprintCallable)
    bool Send();
    
    UFUNCTION(BlueprintCallable)
    float GetValue(int32 _sControlType);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetTransform();
    
    UFUNCTION(BlueprintCallable)
    bool GetControlData(FEOSSessionP2PShootingGameControlData& _stControlData);
    
    UFUNCTION(BlueprintCallable)
    int32 GetControlBits();
    
    UFUNCTION(BlueprintCallable)
    void AppendControlBits(int32 _sControlBits);
    
};

