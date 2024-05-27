#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ECareerProp.h"
#include "ELCareerPropBase.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELCareerPropBase : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pCharacter;
    
public:
    AELCareerPropBase(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnimInstanceClass(ECareerProp ePeop);
    
};

