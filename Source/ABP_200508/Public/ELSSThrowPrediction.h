#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStaticsTypes.h"
#include "ESSThrowPredictionType.h"
#include "ELSSThrowPrediction.generated.h"

UCLASS(Blueprintable)
class AELSSThrowPrediction : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CircleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnderCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Points;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CircleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSThrowPredictionType Type;
    
public:
    AELSSThrowPrediction(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePrediction_Native(const FPredictProjectilePathResult& InParam);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePrediction(const FPredictProjectilePathResult& InParam);
    
    UFUNCTION(BlueprintCallable)
    void SetRadiusAndUnderCheckHeight(float inRadius, float inHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetEffectCircle(const FVector& InLoc, float inRadius, bool inOnlyFloor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EndPrediction();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BeginPrediction(ESSThrowPredictionType InType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyRadiusToMesh(float inRadius);
    
};

