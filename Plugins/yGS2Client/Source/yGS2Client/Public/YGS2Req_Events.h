#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_Events.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_Events : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_Events();
    UFUNCTION(BlueprintCallable)
    void SetEventData(const FString& _strEventName, const FString& _strDataType, const FString& _strTextData, bool _bAddToDB, bool _bAddToRAW);
    
    UFUNCTION(BlueprintCallable)
    void SetBinaryData(const FString& _strBinary, const FString& _strExtension, const FString& _strMimeType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetResultID() const;
    
};

