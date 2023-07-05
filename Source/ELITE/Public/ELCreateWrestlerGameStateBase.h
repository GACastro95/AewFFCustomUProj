#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameState.h"
#include "Templates/SubclassOf.h"
#include "ELCreateWrestlerGameStateBase.generated.h"

class UCustomWrestlerAssistComponent;

UCLASS(Abstract, Blueprintable)
class ELITE_API AELCreateWrestlerGameStateBase : public AGameState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCustomWrestlerAssistComponent> EditWrestlerCoreComponentClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCustomWrestlerAssistComponent* EditWrestlerCoreComponent;
    
public:
    AELCreateWrestlerGameStateBase();
};

