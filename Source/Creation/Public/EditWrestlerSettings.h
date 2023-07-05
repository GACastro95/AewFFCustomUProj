#pragma once
#include "CoreMinimal.h"
#include "EditWrestlerSettings.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FEditWrestlerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ProfileFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultPresetNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseID;
    
    FEditWrestlerSettings();
};

