#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorUtilityFunctionLibrary.generated.h"

class AActor;
class USceneComponent;

UCLASS(Blueprintable)
class ELITE_CORE_API UActorUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UActorUtilityFunctionLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static void ChangeRootComponent(AActor* Actor, USceneComponent* NewRootComponent);
    
};

