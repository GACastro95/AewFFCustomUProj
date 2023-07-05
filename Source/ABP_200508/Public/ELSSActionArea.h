#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ELSSActionArea.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable)
class ABP_200508_API AELSSActionArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* AreaCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enabled;
    
public:
    AELSSActionArea();
    UFUNCTION(BlueprintCallable)
    void SetEnable(bool inEnable);
    
    UFUNCTION(BlueprintCallable)
    bool IsEnable();
    
    UFUNCTION(BlueprintCallable)
    void Check(const FTransform& userTransform, const FVector& TargetLocation, bool inEnableRemainStep);
    
};

