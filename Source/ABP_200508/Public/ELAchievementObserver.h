#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELAchievementObserver.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ABP_200508_API UELAchievementObserver : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StealFinisherTimer_N;
    
public:
    UELAchievementObserver();
};

