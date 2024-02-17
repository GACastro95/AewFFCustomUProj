#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSMainMenuSubLevel.h"
#include "SSMainMenuSubLevelParam.generated.h"

USTRUCT(BlueprintType)
struct FSSMainMenuSubLevelParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSMainMenuSubLevel Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> LevelNames;
    
    ABP_200508_API FSSMainMenuSubLevelParam();
};

