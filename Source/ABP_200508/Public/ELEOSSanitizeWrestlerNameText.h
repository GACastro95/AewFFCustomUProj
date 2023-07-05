#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WrestlerNameText.h"
#include "EELEOSSanitizeWrestlerNameType.h"
#include "EOSSanitizeWrestlerNameTextEventDelegate.h"
#include "ELEOSSanitizeWrestlerNameText.generated.h"

UCLASS(Blueprintable)
class UELEOSSanitizeWrestlerNameText : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWrestlerNameText WrestlerNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EELEOSSanitizeWrestlerNameType, bool> SanitizeTextMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* UserDataObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSSanitizeWrestlerNameTextEvent SanitizeCompleteDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataID;
    
public:
    UELEOSSanitizeWrestlerNameText();
};

