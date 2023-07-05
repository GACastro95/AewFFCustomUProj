#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_Hp.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_Hp : public AELSSItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoveryRate;
    
public:
    AELSSItem_Hp();
};

