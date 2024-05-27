#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_Jewel.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_Jewel : public AELSSItemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Jewel;
    
public:
    AELSSItem_Jewel(const FObjectInitializer& ObjectInitializer);

};

