#pragma once
#include "CoreMinimal.h"
#include "ELSSEnvQueryGenerator_ActorsOfClassBase.h"
#include "ESSPickupType.h"
#include "ELSSEnvQueryGenerator_ActorsOfPickupObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSEnvQueryGenerator_ActorsOfPickupObject : public UELSSEnvQueryGenerator_ActorsOfClassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPickupType PickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsNeedInteract;
    
    UELSSEnvQueryGenerator_ActorsOfPickupObject();

};

