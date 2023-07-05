#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EYDBGDeviceType.h"
#include "YDBGWatermark.generated.h"

class UYDBGWatermark;

UCLASS(Blueprintable)
class YDEBUG_API UYDBGWatermark : public UObject {
    GENERATED_BODY()
public:
    UYDBGWatermark();
    UFUNCTION(BlueprintCallable)
    bool Setup(const FString& _strChangelistFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVersion() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetUserName(FString& _rstrName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EYDBGDeviceType GetDeviceType() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetComputerName(FString& _rstrName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCLUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCLDate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCLClient() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChangeListNo() const;
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYDBGWatermark(UYDBGWatermark*& _pcInst);
    
};

