#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Animation/AnimTypes.h"
#include "YCAM_AnimDistanceTest.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AYCAM_AnimDistanceTest : public AActor {
    GENERATED_BODY()
public:
    AYCAM_AnimDistanceTest();
    UFUNCTION(BlueprintCallable)
    float GetStrikeAnimAtkTime(const FAnimNotifyEvent& In_AnimNotify);
    
};

