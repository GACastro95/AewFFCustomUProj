#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EELSessionPacketNotifyType.h"
#include "ELSessionPacketNotify.generated.h"

UCLASS(Blueprintable)
class UELSessionPacketNotify : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELSessionPacketNotifyType NotifyType;
    
public:
    UELSessionPacketNotify();
};

