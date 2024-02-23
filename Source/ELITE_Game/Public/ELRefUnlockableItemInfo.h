#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ELUnlockItemSaveData.h"
#include "UnlockableItemParam.h"
#include "ELRefUnlockableItemInfo.generated.h"

USTRUCT(BlueprintType)
struct ELITE_GAME_API FELRefUnlockableItemInfo : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUnlockableItemParam ItemParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FELUnlockItemSaveData SaveData;
    
    FELRefUnlockableItemInfo();
};

