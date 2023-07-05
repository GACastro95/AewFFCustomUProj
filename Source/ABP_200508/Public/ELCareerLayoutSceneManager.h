#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerLayoutSceneState.h"
#include "ELCareerLayoutSceneManager.generated.h"

class UELGameInstance;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerLayoutSceneManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELGameInstance* m_pELGameInstance;
    
public:
    AELCareerLayoutSceneManager();
    UFUNCTION(BlueprintCallable)
    void SetState(ECareerLayoutSceneState State);
    
    UFUNCTION(BlueprintCallable)
    void CheckState(int32 _value);
    
};

