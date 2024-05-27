#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSFadeManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSFadeManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SimpleFadeTime;
    
public:
    AELSSFadeManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SimpleFadeReady();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float SimpleFadeOut(float InDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    float SimpleFadeIn(float InDuration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, BlueprintPure)
    bool IsDoneSimpleFade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void GetSimpleFadeState(bool& outIsFadeIn, bool& outFadeCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool DestroySimpleFade();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool CreateSimpleFade();
    
};

