#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELEOSSanitizeTextWrestlerData.generated.h"

class UEOSUserBase;

UCLASS(Blueprintable)
class UELEOSSanitizeTextWrestlerData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PacketID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WrestlerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEOSUserBase* WrestlerDataSender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExternalAccountId;
    
public:
    UELEOSSanitizeTextWrestlerData();
};

