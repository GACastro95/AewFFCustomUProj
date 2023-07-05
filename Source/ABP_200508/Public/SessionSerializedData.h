#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PPacketBase.h"
#include "SessionSerializedData.generated.h"

class UObject;

UCLASS(Blueprintable)
class USessionSerializedData : public UEOSSessionP2PPacketBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SerializedData;
    
public:
    USessionSerializedData();
    UFUNCTION(BlueprintCallable)
    bool SetObject(UObject* Object, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSerializedDataSize() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetObject(UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    UObject* CreateObject(UObject* Outer);
    
};

