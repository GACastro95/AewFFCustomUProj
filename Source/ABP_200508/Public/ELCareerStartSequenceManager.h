#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ELCareerStartSequenceManager.generated.h"

class UELCareerModeStart;
class UELCareerWrestlerSelect;

UCLASS(Blueprintable)
class ABP_200508_API AELCareerStartSequenceManager : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELCareerModeStart* m_pCareerModeStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UELCareerWrestlerSelect* m_pWrestlerSelect;
    
public:
    AELCareerStartSequenceManager();
    UFUNCTION(BlueprintCallable)
    void CheckState(int32 _value);
    
};

