#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ELCharacterComponent.generated.h"

class ACharacter;
class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ELITE_CORE_API UELCharacterComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterOwner;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* OwnerRoot;
    
public:
    UELCharacterComponent();
    UFUNCTION(BlueprintCallable)
    ACharacter* GetOwnerAsCharacter();
    
};

