#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELRingBase.generated.h"

UCLASS(Blueprintable)
class ELITE_API AELRingBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RopesList_N;
    
public:
    AELRingBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetNearRope(const FVector& Location) const;
    
};

