#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "CareerSnapshotImage.h"
#include "SaveData_CareerModeSnapshot.generated.h"

UCLASS(Blueprintable)
class USaveData_CareerModeSnapshot : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerSnapshotImage> SnapshotDataArray;
    
    USaveData_CareerModeSnapshot();
};

