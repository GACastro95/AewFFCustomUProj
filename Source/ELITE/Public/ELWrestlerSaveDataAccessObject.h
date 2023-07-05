#pragma once
#include "CoreMinimal.h"
#include "ELSaveDataAccessObject.h"
#include "ELWrestlerSaveDataAccessObject.generated.h"

UCLASS(Blueprintable)
class ELITE_API UELWrestlerSaveDataAccessObject : public UELSaveDataAccessObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FileNoList;
    
public:
    UELWrestlerSaveDataAccessObject();
};

