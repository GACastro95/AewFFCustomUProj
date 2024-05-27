#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameSingletonSubsystem.generated.h"

class UObject;

UCLASS(Blueprintable)
class ABP_200508_API UGameSingletonSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> InstanceMap;
    
public:
    UGameSingletonSubsystem();

    UFUNCTION(BlueprintCallable)
    void ReleaseInstance(UClass* Class);
    
    UFUNCTION(BlueprintCallable)
    UObject* GetInstance(UClass* Class);
    
};

