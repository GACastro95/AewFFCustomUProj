#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "ESSModeServiceState.h"
#include "ELSSModeServiceParam.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=OnlineServer)
class ABP_200508_API UELSSModeServiceParam : public UObject {
    GENERATED_BODY()
public:
    UELSSModeServiceParam();

    UFUNCTION(BlueprintCallable)
    bool Setup(const FString& Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIgnoreMaintenance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndSetup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTitle(const FString& Language) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSModeServiceState GetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMaintenanceOutTime(FDateTime& outDateTime, bool checkEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMaintenanceInTime(FDateTime& outDateTime, bool checkEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetBody(const FString& Language) const;
    
};

