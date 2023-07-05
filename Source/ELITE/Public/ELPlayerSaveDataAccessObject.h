#pragma once
#include "CoreMinimal.h"
#include "ELGeneralSaveDataAccessObject.h"
#include "ELPlayerSaveDataAccessObject.generated.h"

UCLASS(Blueprintable)
class ELITE_API UELPlayerSaveDataAccessObject : public UELGeneralSaveDataAccessObject {
    GENERATED_BODY()
public:
    UELPlayerSaveDataAccessObject();
};

