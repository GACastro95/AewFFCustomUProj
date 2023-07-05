#pragma once
#include "CoreMinimal.h"
#include "CreateTeamParam.h"
#include "ELWrestlerProfile_CutScene.h"
#include "ELAdjustDlcSaveDataAccessObjectBase.h"
#include "ELAdjustDlcObjectForCustomTeam.generated.h"

class UELCAEAdjustDLC;

UCLASS(Blueprintable)
class ELITE_API UELAdjustDlcObjectForCustomTeam : public UELAdjustDlcSaveDataAccessObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELWrestlerProfile_CutScene DefaultEntranceCutscene;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreateTeamParam> TeamParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCreateTeamParam> ReleaseList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ChangeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UELCAEAdjustDLC* CAEAdjustDLC;
    
public:
    UELAdjustDlcObjectForCustomTeam();
};

