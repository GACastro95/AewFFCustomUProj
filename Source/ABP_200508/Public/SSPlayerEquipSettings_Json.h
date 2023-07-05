#pragma once
#include "CoreMinimal.h"
#include "SSPlayerEquipSettings.h"
#include "SSPlayerEquipSettings_Json.generated.h"

USTRUCT(BlueprintType)
struct FSSPlayerEquipSettings_Json {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSSPlayerEquipSettings JsonSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString JsonValue;
    
    ABP_200508_API FSSPlayerEquipSettings_Json();
};

