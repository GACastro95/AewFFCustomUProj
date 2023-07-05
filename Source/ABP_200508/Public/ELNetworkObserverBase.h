#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ApplicationStatusChangedDelegate.h"
#include "EELApplicationStatus.h"
#include "EELNetworkStatus.h"
#include "EELNetworkType.h"
#include "NetworkConnectionStatusChangedDelegate.h"
#include "NetworkStatusChangedDelegate.h"
#include "NetworkTypeChangedDelegate.h"
#include "ELNetworkObserverBase.generated.h"

UCLASS(Blueprintable)
class UELNetworkObserverBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FApplicationStatusChanged ApplicationStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkStatusChanged NetworkStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkTypeChanged NetworkTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNetworkConnectionStatusChanged NetworkConnectionStatusChanged;
    
    UELNetworkObserverBase();
    UFUNCTION(BlueprintCallable)
    void SetNetworkEquipment(EELNetworkStatus NetworkStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELNetworkType GetNetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELNetworkStatus GetNetStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EELApplicationStatus GetAppStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetDisableYGS2(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetDisableNetwork(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    void Debug_SetDisableEOS(bool Disable);
    
};

