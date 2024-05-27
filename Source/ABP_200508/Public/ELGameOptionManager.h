#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELGameOptionManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELGameOptionManager : public UObject {
    GENERATED_BODY()
public:
    UELGameOptionManager();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void ApplySaveDataToParam(UObject* _pWorldContextObject, bool bApplyLanguage);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_pWorldContextObject"))
    void ApplyLanguageToParam(UObject* _pWorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    int32 ApplyDefaultMatchMatchMekingCode();
    
};

