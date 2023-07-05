#pragma once
#include "CoreMinimal.h"
#include "EKeyActionType.h"
#include "EKeyMappingType.h"
#include "KeyActionData.generated.h"

USTRUCT(BlueprintType)
struct FKeyActionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyActionType KeyActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EKeyMappingType KeyMapType;
    
    ABP_200508_API FKeyActionData();
};

