#pragma once
#include "CoreMinimal.h"
#include "ELSSEnvQueryGenerator_ActorsOfClassBase.h"
#include "ESSActorType.h"
#include "ELSSEnvQueryGenerator_ActorsOfClass.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ABP_200508_API UELSSEnvQueryGenerator_ActorsOfClass : public UELSSEnvQueryGenerator_ActorsOfClassBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInteractableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSActorType SSActorType;
    
    UELSSEnvQueryGenerator_ActorsOfClass();
};

