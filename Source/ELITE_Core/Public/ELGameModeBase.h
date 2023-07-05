#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ELGameModeBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class ELITE_CORE_API AELGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartGame;
    
public:
    AELGameModeBase();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartGame();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure=false)
    bool CheckCanStartGame() const;
    
};

