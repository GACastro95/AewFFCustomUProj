#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELSSManagerActorInterface.h"
#include "ESSRound.h"
#include "ESSRoundState.h"
#include "SSRoundAdjustParam.h"
#include "SSRoundEventDispatcherDelegate.h"
#include "SSRoundOnTickEventDispatcherDelegate.h"
#include "SSRoundParam.h"
#include "Templates/SubclassOf.h"
#include "ELSSRoundManager.generated.h"

class AELSSStorm;

UCLASS(Blueprintable)
class ABP_200508_API AELSSRoundManager : public AActor, public IELSSManagerActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRoundEventDispatcher EventOnBeginRound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRoundEventDispatcher EventOnEndRound;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRoundOnTickEventDispatcher EventOnTickRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSStorm* StormActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSStorm> StormActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 StormRandomSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ElapsedTime, meta=(AllowPrivateAccess=true))
    float ElapsedTimeRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTimeLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RoundTotalTime, meta=(AllowPrivateAccess=true))
    float RoundTotalTimeRep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundTotalTimeLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRoundParam CurrentRoundParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentRoundIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSRoundState RoundState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoundBeginTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSSRoundParam> RoundParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSRoundAdjustParam AdjustParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float RoundSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* UIManagerActor;
    
public:
    AELSSRoundManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StartRound0();
    
    UFUNCTION(BlueprintCallable)
    void StartReadyState();
    
    UFUNCTION(BlueprintCallable)
    void SetUIManagerActor(AActor* InActor);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTickRound(const FSSRoundParam& inRoundParam, float inNewRoundTime, float inPrevRoundTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RoundTotalTime();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ElapsedTime();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBeginRound(const FSSRoundParam& inRoundParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRoundFinal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeRoundParamArray();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AELSSStorm* GetStorm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESSRound GetCurrentRound() const;
    

    // Fix for true pure virtual functions not being implemented
};

