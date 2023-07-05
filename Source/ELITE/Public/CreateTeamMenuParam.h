#pragma once
#include "CoreMinimal.h"
#include "CreateTeamParam.h"
#include "Engine/DataTable.h"
#include "EnCatLoadOutMenuType.h"
#include "EnCatMenuMode.h"
#include "EnCatSettingListItemType.h"
#include "CreateTeamMenuParam.generated.h"

USTRUCT(BlueprintType)
struct FCreateTeamMenuParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnCatMenuMode MenuMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreateTeamParam CurrentTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EditSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnCatLoadOutMenuType LoadOutMenuType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnCatSettingListItemType SettingMenuType;
    
    ELITE_API FCreateTeamMenuParam();
};

