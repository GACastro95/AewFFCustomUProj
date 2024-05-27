#pragma once
#include "CoreMinimal.h"
#include "CustomRosterRaw.h"
#include "EditWrestlerRaw.h"
#include "ELSaveGameBase.h"
#include "SaveData_UGC_Wrestler.generated.h"

UCLASS(Blueprintable)
class USaveData_UGC_Wrestler : public UELSaveGameBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomRosterRaw> Rosters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditWrestlerRaw> Scouts;
    
    USaveData_UGC_Wrestler();

    UFUNCTION()
    uint32 GetScoutNum() const;
    
    UFUNCTION()
    uint32 GetRosterNum() const;
    
};

