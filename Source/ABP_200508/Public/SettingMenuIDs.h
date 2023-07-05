#pragma once
#include "CoreMinimal.h"
#include "SettingMenuIDs.generated.h"

USTRUCT(BlueprintType)
struct FSettingMenuIDs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IDs;
    
    ABP_200508_API FSettingMenuIDs();
};

