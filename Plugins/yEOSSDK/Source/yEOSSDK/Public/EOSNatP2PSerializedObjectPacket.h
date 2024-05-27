#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PPacketBase.h"
#include "EOSNatP2PSerializedObjectPacket.generated.h"

class UObject;

UCLASS(Blueprintable)
class YEOSSDK_API UEOSNatP2PSerializedObjectPacket : public UEOSNatP2PPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> m_cSerializedData;
    
public:
    UEOSNatP2PSerializedObjectPacket();

    UFUNCTION(BlueprintCallable)
    bool SetObject(UObject* _pcObject, int32 _sType, int32 _sId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetId() const;
    
    UFUNCTION(BlueprintCallable)
    UObject* CreateObject(UObject* Outer);
    
};

