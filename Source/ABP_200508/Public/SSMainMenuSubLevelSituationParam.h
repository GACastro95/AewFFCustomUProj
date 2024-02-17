#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSMainMenuSubLevel.h"
#include "ESSMainMenuSubLevelSituation.h"
#include "SSMainMenuSubLevelSituationParam.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuSubLevelSituationParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMainMenuSubLevelSituation Situation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool MenuWrestlersVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMainMenuSubLevel, bool> SubLevelTypesAndVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMainMenuSubLevel, bool> SubLevelTypesAndVisibility_SoloOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESSMainMenuSubLevel, bool> SubLevelTypesAndVisibility_PartyOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool WithDefaultSituationLevels;
    
    ABP_200508_API FSSMainMenuSubLevelSituationParam();
};

