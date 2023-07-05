#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_RecoveryShield.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_RecoveryShield : public AELSSItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryRate;
    
public:
    AELSSItem_RecoveryShield();
};

