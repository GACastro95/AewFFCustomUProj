#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ELSaveDataManagerObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_API UELSaveDataManagerObject : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSlotNum_N;
    
public:
    UELSaveDataManagerObject();

protected:
    UFUNCTION(BlueprintCallable)
    int32 GetMaxSlotNum_N(int32 ItemId);
    
};

