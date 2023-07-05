#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameSingleton.generated.h"

class UGameSingleton;
class UWorld;

UCLASS(Blueprintable)
class ELITE_CORE_API UGameSingleton : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableWhenPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickableInEditor;
    
public:
    UGameSingleton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitialize();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWorld* GetWorldForBP() const;
    
    UFUNCTION(BlueprintCallable)
    static bool GetSingletonInstance(UGameSingleton*& Instance, const FString& BPPath, bool Create);
    
    UFUNCTION(BlueprintCallable)
    static bool DeleteSingletonInstance(const FString& BPPath);
    
    UFUNCTION(BlueprintCallable)
    static bool CreateSingletonInstance(UGameSingleton*& Instance, const FString& BPPath);
    
};

