#pragma once
#include "CoreMinimal.h"
#include "KeyMapSettingData.h"
#include "KeyMapSettingsDataReference.generated.h"

USTRUCT(BlueprintType)
struct FKeyMapSettingsDataReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyMapSettingData> KeyMapSettingDataList;
    
    ABP_200508_API FKeyMapSettingsDataReference();
};

