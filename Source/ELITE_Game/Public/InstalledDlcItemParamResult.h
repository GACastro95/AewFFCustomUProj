#pragma once
#include "CoreMinimal.h"
#include "InstalledDlcItemParam.h"
#include "InstalledDlcItemParamResult.generated.h"

USTRUCT(BlueprintType)
struct FInstalledDlcItemParamResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstalledDlcItemParam> ParamList;
    
    ELITE_GAME_API FInstalledDlcItemParamResult();
};

