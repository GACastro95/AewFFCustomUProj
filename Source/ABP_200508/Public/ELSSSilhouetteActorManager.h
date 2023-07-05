#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Templates/SubclassOf.h"
#include "ELSSSilhouetteActorManager.generated.h"

class AELSSPlayer;
class AELSSSilhouetteActor;

UCLASS(Blueprintable)
class ABP_200508_API AELSSSilhouetteActorManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSPlayer* OwnerPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AELSSSilhouetteActor*> SilhouetteActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AELSSSilhouetteActor> SilhouetteActorClass;
    
    AELSSSilhouetteActorManager();
};

