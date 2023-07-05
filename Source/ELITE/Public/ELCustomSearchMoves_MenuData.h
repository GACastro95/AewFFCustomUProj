#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELCustomSearch.h"
#include "ELCustomSearchMoves_MenuData.generated.h"

USTRUCT(BlueprintType)
struct FELCustomSearchMoves_MenuData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELCustomSearch SearchCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SettingMenuID;
    
    ELITE_API FELCustomSearchMoves_MenuData();
};

