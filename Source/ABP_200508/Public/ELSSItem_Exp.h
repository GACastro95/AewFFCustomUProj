#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_Exp.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_Exp : public AELSSItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
public:
    AELSSItem_Exp();
};

