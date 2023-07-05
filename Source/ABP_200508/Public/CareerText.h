#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CareerText.generated.h"

USTRUCT(BlueprintType)
struct FCareerText : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LocalizeKey;
    
    ABP_200508_API FCareerText();
};

