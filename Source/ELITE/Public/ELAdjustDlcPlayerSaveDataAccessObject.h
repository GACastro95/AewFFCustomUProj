#pragma once
#include "CoreMinimal.h"
#include "ELAdjustDlcSaveDataAccessObjectBase.h"
#include "ELAdjustDlcPlayerSaveDataAccessObject.generated.h"

UCLASS(Abstract, Blueprintable)
class ELITE_API UELAdjustDlcPlayerSaveDataAccessObject : public UELAdjustDlcSaveDataAccessObjectBase {
    GENERATED_BODY()
public:
    UELAdjustDlcPlayerSaveDataAccessObject();
};

