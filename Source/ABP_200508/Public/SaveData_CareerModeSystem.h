#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "CareerSnapshotRaw.h"
#include "SaveData_CareerModeSystem.generated.h"

UCLASS(Blueprintable)
class USaveData_CareerModeSystem : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCareerSnapshotRaw> Snapshots;
    
    USaveData_CareerModeSystem();

};

