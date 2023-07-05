#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DBGSettingDATA.h"
#include "DebugSettingActiveFlagChangedDispatcherDelegate.h"
#include "DebugSettingValueChangedDispatcherDelegate.h"
#include "YDBGSettingReader.generated.h"

class UYDBGSettingReader;

UCLASS(Blueprintable)
class YDEBUG_API UYDBGSettingReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugSettingValueChangedDispatcher DebugSettingValueChangedDispatcher;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugSettingActiveFlagChangedDispatcher DebugSettingActiveFlagChangedDispatcher;
    
    UYDBGSettingReader();
    UFUNCTION(BlueprintCallable)
    bool SetValue(const float _fValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetString(const FString& _strValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool SetActive(bool _bActive, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool Load(const FString& _strFileName);
    
    UFUNCTION(BlueprintCallable)
    bool IsActive(const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetString(FString& _rstrValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetInt(int32& _rsValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetFloat(float& _rfValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetComment(FString& _rstrComment, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable)
    bool GetBool(bool& _rbValue, const FString& _strKey);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FDBGSettingDATA> GetAllItemList() const;
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYDBGSettingReader(UYDBGSettingReader*& _pcInst);
    
};

