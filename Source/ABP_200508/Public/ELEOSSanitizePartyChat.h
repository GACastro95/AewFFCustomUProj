#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EOSSanitizePartyChatEventDelegate.h"
#include "ELEOSSanitizePartyChat.generated.h"

UCLASS(Blueprintable)
class UELEOSSanitizePartyChat : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSanitizePartyChatEvent SanitizePartyChatEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataID;
    
public:
    UELEOSSanitizePartyChat();
};

