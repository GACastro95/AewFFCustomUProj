#pragma once
#include "CoreMinimal.h"
#include "ELSSLocator.h"
#include "ESSItemBoxLocatorGroup.h"
#include "ELSSLocator_ItemBox.generated.h"

class AELSSItemBox;

UCLASS(Blueprintable)
class ABP_200508_API AELSSLocator_ItemBox : public AELSSLocator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSItemBoxLocatorGroup LocatorGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AELSSItemBox* SpawnedItemBox;
    
public:
    AELSSLocator_ItemBox();
};

