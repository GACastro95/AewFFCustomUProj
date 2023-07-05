#pragma once
#include "CoreMinimal.h"
#include "SingletonBase.h"
#include "OnSanitizeTextArrayDelegate.h"
#include "OnSanitizeTextDelegate.h"
#include "ELTextFilterManager.generated.h"

class UObject;

UCLASS(Blueprintable)
class UELTextFilterManager : public USingletonBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isinit;
    
public:
    UELTextFilterManager();
    UFUNCTION(BlueprintCallable)
    bool TextFilterSteam(int32 filterCategory, const FString& _SrcText, FString& _DstText, const FString& ExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    bool TextFilterArray(const TArray<FString>& SrcText, const FOnSanitizeTextArray& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId);
    
    UFUNCTION(BlueprintCallable)
    bool TextFilter(const FString& SrcText, const FOnSanitizeText& OnSanitizeTextComplete, UObject* UserData, const FString& ExternalAccountId);
    
};

