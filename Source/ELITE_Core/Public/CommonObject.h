#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "CommonObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_CORE_API UCommonObject : public UObject {
    GENERATED_BODY()
public:
    UCommonObject();
};

