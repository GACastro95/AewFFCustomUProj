#pragma once
#include "CoreMinimal.h"
#include "ELSSItemBase.h"
#include "ELSSItem_BlackDia.generated.h"

class AActor;

UCLASS(Blueprintable)
class ABP_200508_API AELSSItem_BlackDia : public AELSSItemBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OldOwnerActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Jewel;
    
public:
    AELSSItem_BlackDia(const FObjectInitializer& ObjectInitializer);

};

