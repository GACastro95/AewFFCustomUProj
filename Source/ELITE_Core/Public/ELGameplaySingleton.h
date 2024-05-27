#pragma once
#include "CoreMinimal.h"
#include "SingletonBase.h"
#include "ELGameplaySingleton.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_CORE_API UELGameplaySingleton : public USingletonBase {
    GENERATED_BODY()
public:
    UELGameplaySingleton();

};

