#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "TeamSaveData.h"
#include "SaveData_UGC_Team.generated.h"

UCLASS(Blueprintable)
class USaveData_UGC_Team : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamSaveData> TeamSaveDataArray;
    
    USaveData_UGC_Team();

};

