#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EELCustomSearch.h"
#include "ELCustomSearchMenuData.generated.h"

USTRUCT(BlueprintType)
struct FELCustomSearchMenuData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELCustomSearch SearchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultCheck;
    
    ELITE_API FELCustomSearchMenuData();
};

