#pragma once
#include "CoreMinimal.h"
#include "EEOSPresenceStatus.h"
#include "EOSIDs.h"
#include "EOSPresenceAPIVersionSettings.h"
#include "EOSPresenceEventDispatcherDelegate.h"
#include "EOSPresenceBase.generated.h"

UCLASS(Blueprintable)
class YEOSSDK_API UEOSPresenceBase : public UEOSIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEOSPresenceEventDispatcher PresenceEventDispatcher;
    
    UEOSPresenceBase();
    UFUNCTION(BlueprintCallable)
    bool SetupInternalCallback();
    
    UFUNCTION(BlueprintCallable)
    static void SetApiVersion(FEOSPresenceAPIVersionSettings _stAPIVerSetting);
    
    UFUNCTION(BlueprintCallable)
    bool RequestGetPresence(const FString& _strRequestEpicAccountID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetRichText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetRecords() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EEOSPresenceStatus GetPresenceStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetJoinedInSession() const;
    
};

