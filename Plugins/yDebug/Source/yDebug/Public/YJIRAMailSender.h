#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "YJIRAMailData.h"
#include "YJIRAMailSender.generated.h"

class UYJIRAMailSender;

UCLASS(Blueprintable)
class YDEBUG_API UYJIRAMailSender : public UObject {
    GENERATED_BODY()
public:
    UYJIRAMailSender();

    UFUNCTION(BlueprintCallable)
    bool Send(const FYJIRAMailData& _stMailData);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateYJIRAMailSender(UYJIRAMailSender*& _pcInst);
    
};

