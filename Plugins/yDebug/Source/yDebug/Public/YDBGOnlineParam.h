#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDBGOnlineParam.generated.h"

class UYDBGOnlineParam;

UCLASS(Blueprintable)
class YDEBUG_API UYDBGOnlineParam : public UObject {
    GENERATED_BODY()
public:
    UYDBGOnlineParam();

    UFUNCTION(BlueprintCallable)
    bool Setup(const FString& _strSettingFileName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableShowDebugInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLog() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableAutoLogin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWorldType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTickBudgetInMilliseconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShowDebugDefaultNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInstanceID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDebugID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthUser(int32 _sIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetAuthServer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool CreateYDBGOnlineParamerter(UYDBGOnlineParam*& _pcInst, UObject* WorldContextObject);
    
};

