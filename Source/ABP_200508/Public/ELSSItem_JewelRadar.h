#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_JewelRadar.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_JewelRadar : public AELSSItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JewelRadar;
    
public:
    AELSSItem_JewelRadar();
};

