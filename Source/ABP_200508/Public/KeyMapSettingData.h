#pragma once
#include "CoreMinimal.h"
#include "KeyActionData.h"
#include "KeyMapSettingData.generated.h"

USTRUCT(BlueprintType)
struct FKeyMapSettingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyActionData KeyActionData;
    
    ABP_200508_API FKeyMapSettingData();
};

