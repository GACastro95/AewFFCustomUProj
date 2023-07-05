#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YDBGMailBody.h"
#include "YDBGMailHeader.h"
#include "YDBGMail.generated.h"

class UYDBGMail;

UCLASS(Blueprintable)
class YDEBUG_API UYDBGMail : public UObject {
    GENERATED_BODY()
public:
    UYDBGMail();
    UFUNCTION(BlueprintCallable)
    bool Send(const FYDBGMailHeader& _stHeader, const FYDBGMailBody& _stBody);
    
    UFUNCTION(BlueprintCallable)
    bool IsConnected();
    
    UFUNCTION(BlueprintCallable)
    bool Disconnect();
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYDBGMail(UYDBGMail*& _pcInst);
    
    UFUNCTION(BlueprintCallable)
    bool Connect(const FString& _strIP, int32 _sPort);
    
};

