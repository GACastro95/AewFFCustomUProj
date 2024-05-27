#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_UserStats.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_UserStats : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_UserStats();

    UFUNCTION(BlueprintCallable)
    void SetUpdateItems(const FString& _strKind, const TMap<FString, FString>& _cUpdateItems, const FString& _strStructID, bool _bSave);
    
    UFUNCTION(BlueprintCallable)
    void SetRemoveKeys(const FString& _strKind, const TArray<FString>& _cRemoveKeys);
    
    UFUNCTION(BlueprintCallable)
    void SetGetCondition(const FString& _strProductUserID, const FString& _strKind, const TArray<FString>& _cTargets);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> Records() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FString, FString> GetUpdateItems() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStructID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetProductUserID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastListNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetKind() const;
    
};

