#pragma once
#include "CoreMinimal.h"
#include "InstalledDlcItemParam.generated.h"

USTRUCT(BlueprintType)
struct FInstalledDlcItemParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DlcItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Installed;
    
    ELITE_GAME_API FInstalledDlcItemParam();
};

