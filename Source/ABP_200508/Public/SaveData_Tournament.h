#pragma once
#include "CoreMinimal.h"
#include "ELSaveGameBase.h"
#include "ELLocalTournamentProgressSaveData.h"
#include "ELTournamentSaveData.h"
#include "SaveData_Tournament.generated.h"

UCLASS(Blueprintable)
class USaveData_Tournament : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FELTournamentSaveData TournamentData[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELLocalTournamentProgressSaveData LocalTournamentData;
    
    USaveData_Tournament();
};

