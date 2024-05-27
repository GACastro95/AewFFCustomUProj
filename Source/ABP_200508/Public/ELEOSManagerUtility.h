#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "WrestlerNameText.h"
#include "EOSSanitizePartyChatEventDelegate.h"
#include "EOSSanitizeWrestlerNameTextEventDelegate.h"
#include "ELEOSManagerUtility.generated.h"

class UELEOSSanitizeTextPartyChat;
class UELEOSSanitizeTextWrestlerData;

UCLASS(Blueprintable)
class UELEOSManagerUtility : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> SanitizeRequestObjectMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DebugDisableTextFilter;
    
public:
    UELEOSManagerUtility();

    UFUNCTION(BlueprintCallable)
    void RequestSanitizeWrestlerName(FEOSSanitizeWrestlerNameTextEvent Delegate, UELEOSSanitizeTextWrestlerData* UserData);
    
    UFUNCTION(BlueprintCallable)
    void RequestSanitizePartyChat(FEOSSanitizePartyChatEvent Delegate, UELEOSSanitizeTextPartyChat* UserData);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_SpokenName(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_SnsAccount(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_ShortName(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_RingName(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_PartyChat(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_NickName(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_MultilineRingName(const FString& SanitizeText, UObject* UserData);
    
    UFUNCTION(BlueprintCallable)
    void OnSanitizeText_All(const TArray<FString>& SanitizeText, UObject* UserData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidOnlineWrestlerData(UObject* OnlineWrestlerData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetWrestlerNameText(UObject* OnlineWrestlerData, FWrestlerNameText& WrestlerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyWrestlerNameText(UObject* OnlineWrestlerData, const FWrestlerNameText& WrestlerName);
    
};

