#pragma once
#include "CoreMinimal.h"
#include "ELSaveDataAccessObject.h"
#include "ELCareerSnapshotSaveDataAccessObject.generated.h"

UCLASS(Blueprintable)
class ELITE_API UELCareerSnapshotSaveDataAccessObject : public UELSaveDataAccessObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> FileNoList;
    
public:
    UELCareerSnapshotSaveDataAccessObject();
};

