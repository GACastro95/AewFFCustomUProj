#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameLiftClientObject.generated.h"

class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGameLiftClientObject : public UObject {
    GENERATED_BODY()
public:
    UGameLiftClientObject();

    UFUNCTION(BlueprintCallable)
    void SetUniquePlayerId(const FString& uniqId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalTest() const;
    
    UFUNCTION(BlueprintCallable)
    static UGameLiftClientObject* CreateGameLiftObject(const FString& AccessKey, const FString& Secret, const FString& Region, bool bUsingGameLiftLocal, int32 LocalPort);
    
};

